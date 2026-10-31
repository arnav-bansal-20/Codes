import matplotlib
matplotlib.use("Agg")
import matplotlib.pyplot as plt
from matplotlib.patches import FancyBboxPatch, Ellipse, Polygon
import numpy as np

fig, ax = plt.subplots(figsize=(24, 20))
ax.set_xlim(-16, 13)
ax.set_ylim(-15, 16)
ax.axis("off")
ax.set_aspect("equal")

COL_ENTITY = "#8E97F0"
COL_ATTR = "#F27DDB"
COL_ATTR_KEY = "#F0538C"
COL_REL = "#B4E197"
COL_HEADER = "#A8D98F"
LINE_COL = "#333333"
FONT = "DejaVu Sans"

def entity_box(x, y, label, w=2.7, h=1.05):
    box = FancyBboxPatch((x - w/2, y - h/2), w, h,
                          boxstyle="round,pad=0.05,rounding_size=0.12",
                          linewidth=1.6, edgecolor="black", facecolor=COL_ENTITY, zorder=5)
    ax.add_patch(box)
    ax.text(x, y, label, ha="center", va="center", fontsize=13.5, fontweight="bold",
            color="white", zorder=6, family=FONT)
    return dict(x=x, y=y, w=w, h=h)

def relationship_diamond(x, y, label, fontsize=10.5, h=1.0):
    w = max(1.7, 0.155 * len(label) + 0.8)
    pts = [(x, y + h/2), (x + w/2, y), (x, y - h/2), (x - w/2, y)]
    poly = Polygon(pts, closed=True, linewidth=1.6, edgecolor="black", facecolor=COL_REL, zorder=6)
    ax.add_patch(poly)
    ax.text(x, y, label, ha="center", va="center", fontsize=fontsize, fontweight="bold",
            color="#1a1a1a", zorder=7, family=FONT)
    return dict(x=x, y=y, w=w, h=h)

def attribute_ellipse(x, y, label, is_key=False, w=2.05, h=0.74, fontsize=9.7):
    fc = COL_ATTR_KEY if is_key else COL_ATTR
    ell = Ellipse((x, y), w, h, linewidth=1.3, edgecolor="black", facecolor=fc, zorder=8)
    ax.add_patch(ell)
    ax.text(x, y, label, ha="center", va="center", fontsize=fontsize, fontweight="bold",
            color="white", zorder=9, family=FONT)
    if is_key:
        ax.plot([x - w*0.32, x + w*0.32], [y - h*0.27, y - h*0.27], color="white",
                linewidth=1.15, zorder=9)
    return (x, y)

def line(p1, p2, zorder=1, lw=1.3):
    ax.plot([p1[0], p2[0]], [p1[1], p2[1]], color=LINE_COL, linewidth=lw, zorder=zorder)

def cardinality(p, text):
    ax.text(p[0], p[1], text, ha="center", va="center", fontsize=11.5,
            fontweight="bold", color="#111111", zorder=10, family=FONT,
            bbox=dict(boxstyle="round,pad=0.1", fc="white", ec="none", alpha=0.9))

def attach_point(ent, target):
    cx, cy, w, h = ent['x'], ent['y'], ent['w'], ent['h']
    tx, ty = target
    dx, dy = tx - cx, ty - cy
    if dx == 0 and dy == 0:
        return (cx, cy)
    scale_x = (w/2) / abs(dx) if dx != 0 else 1e9
    scale_y = (h/2) / abs(dy) if dy != 0 else 1e9
    s = min(scale_x, scale_y)
    return (cx + dx * s, cy + dy * s)

def point_along(p1, p2, frac):
    return (p1[0] + (p2[0]-p1[0]) * frac, p1[1] + (p2[1]-p1[1]) * frac)

def fan_attributes(ent, attrs, angle_deg, spread_deg, radius):
    n = len(attrs)
    angles = [angle_deg] if n == 1 else np.linspace(angle_deg - spread_deg/2, angle_deg + spread_deg/2, n)
    for ang, (label, is_key) in zip(angles, attrs):
        rad = np.radians(ang)
        tx = ent['x'] + radius * np.cos(rad)
        ty = ent['y'] + radius * np.sin(rad)
        anchor = attach_point(ent, (tx, ty))
        line(anchor, (tx, ty), zorder=2, lw=1.0)
        attribute_ellipse(tx, ty, label, is_key=is_key)

def relate(e1, e2, label, frac=0.5, card1="1", card2="N", card_frac=0.82, fontsize=10.5):
    c1, c2 = (e1['x'], e1['y']), (e2['x'], e2['y'])
    rpos = point_along(c1, c2, frac)
    p1 = attach_point(e1, rpos)
    p2 = attach_point(e2, rpos)
    line(p1, rpos, zorder=3)
    line(rpos, p2, zorder=3)
    relationship_diamond(rpos[0], rpos[1], label, fontsize=fontsize)
    cp1 = point_along(p1, rpos, 1 - card_frac)
    cp2 = point_along(p2, rpos, 1 - card_frac)
    cardinality(cp1, card1)
    cardinality(cp2, card2)

# ---------- Header ----------
header = FancyBboxPatch((-8, 14.15), 16, 1.35, boxstyle="round,pad=0.02,rounding_size=0.1",
                         linewidth=0, facecolor=COL_HEADER, zorder=5)
ax.add_patch(header)
ax.text(0, 14.82, "Entity Relationship Diagram — Fraud Ring Detection", ha="center", va="center",
        fontsize=19, fontweight="bold", color="white", family=FONT, zorder=6)

# ---------- Entities (radial hub layout around TRANSACTION) ----------
E = {}
E['TRANSACTION'] = entity_box(0, 0, "TRANSACTION", w=3.1, h=1.2)

def polar(cx, cy, ang_deg, dist):
    r = np.radians(ang_deg)
    return (cx + dist*np.cos(r), cy + dist*np.sin(r))

mx, my = polar(0, 0, 75, 9.3);   E['MERCHANT']   = entity_box(mx, my, "MERCHANT")
ax_, ay = polar(0, 0, 132, 9.6); E['ACCOUNT']    = entity_box(ax_, ay, "ACCOUNT")
dx_, dy = polar(0, 0, 180, 9.3); E['DEVICE']     = entity_box(dx_, dy, "DEVICE")
cx_, cy = polar(0, 0, 222, 9.8); E['CARD']       = entity_box(cx_, cy, "CARD")
ix_, iy = polar(0, 0, 262, 9.3); E['IP_ADDRESS'] = entity_box(ix_, iy, "IP_ADDRESS")
alx, aly = polar(0, 0, 318, 8.4); E['ALERT']     = entity_box(alx, aly, "ALERT")

# secondary entities, extended further out along their parent's direction
cux, cuy = polar(ax_, ay, 132, 6.3); E['CUSTOMER'] = entity_box(cux, cuy, "CUSTOMER")
anx, any_ = polar(alx, aly, 318, 6.0); E['ANALYST'] = entity_box(anx, any_, "ANALYST")

# ---------- Relationships ----------
relate(E['CUSTOMER'], E['ACCOUNT'], "Owns", frac=0.55, card1="1", card2="N")
relate(E['ACCOUNT'], E['CARD'], "Holds", frac=0.32, card1="1", card2="N")
relate(E['ACCOUNT'], E['TRANSACTION'], "Initiates", frac=0.62, card1="1", card2="N")
relate(E['CARD'], E['TRANSACTION'], "UsedIn", frac=0.62, card1="1", card2="N")
relate(E['MERCHANT'], E['TRANSACTION'], "Receives", frac=0.6, card1="1", card2="N")
relate(E['DEVICE'], E['TRANSACTION'], "ViaDevice", frac=0.58, card1="1", card2="N")
relate(E['IP_ADDRESS'], E['TRANSACTION'], "ViaIP", frac=0.6, card1="1", card2="N")
relate(E['TRANSACTION'], E['ALERT'], "Triggers", frac=0.55, card1="1", card2="1")
relate(E['ANALYST'], E['ALERT'], "Reviews", frac=0.5, card1="1", card2="N")

# ---------- Attributes (fanned outward, away from the hub) ----------
fan_attributes(E['CUSTOMER'],
    [("customer_id", True), ("first_name", False), ("last_name", False),
     ("email", False), ("phone_number", False), ("date_of_birth", False), ("kyc_verified", False)],
    angle_deg=132, spread_deg=150, radius=3.3)

fan_attributes(E['ACCOUNT'],
    [("account_id", True), ("customer_id", False), ("account_number", False),
     ("account_type", False), ("balance", False), ("status", False)],
    angle_deg=100, spread_deg=110, radius=2.9)

fan_attributes(E['CARD'],
    [("card_id", True), ("account_id", False), ("card_number_hash", False),
     ("card_type", False), ("expiry_date", False), ("status", False)],
    angle_deg=222, spread_deg=120, radius=2.9)

fan_attributes(E['MERCHANT'],
    [("merchant_id", True), ("merchant_name", False), ("mcc_category", False), ("location", False)],
    angle_deg=75, spread_deg=100, radius=2.7)

fan_attributes(E['DEVICE'],
    [("device_id", True), ("device_fingerprint", False), ("device_type", False), ("last_seen_at", False)],
    angle_deg=180, spread_deg=110, radius=2.8)

fan_attributes(E['IP_ADDRESS'],
    [("ip_id", True), ("ip_address", False), ("country", False), ("is_vpn", False)],
    angle_deg=262, spread_deg=110, radius=2.7)

fan_attributes(E['TRANSACTION'],
    [("transaction_id", True), ("account_id", False), ("card_id", False), ("merchant_id", False),
     ("device_id", False), ("ip_id", False), ("amount", False), ("txn_timestamp", False),
     ("status", False), ("fraud_label", False)],
    angle_deg=0, spread_deg=68, radius=5.8)

fan_attributes(E['ALERT'],
    [("alert_id", True), ("transaction_id", False), ("analyst_id", False),
     ("risk_score", False), ("alert_status", False), ("created_at", False)],
    angle_deg=318, spread_deg=115, radius=3.3)

fan_attributes(E['ANALYST'],
    [("analyst_id", True), ("name", False), ("email", False), ("role", False)],
    angle_deg=318, spread_deg=110, radius=2.7)

plt.tight_layout()
plt.savefig("/home/claude/erd/erd_output2.png", dpi=160, bbox_inches="tight", facecolor="white")
print("saved")