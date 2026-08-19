# from pypdf import PdfWriter, PdfReader

# def merge_pdfs(files, output):
#     writer = PdfWriter()

#     for file in files:
#         reader = PdfReader(file)
#         for page in reader.pages:
#             writer.add_page(page)

#     with open(output, "wb") as f:
#         writer.write(f)

#     print("Merged successfully!")

# # Example
# files = ["file1.pdf", "file2.pdf"]
# merge_pdfs(files, "output.pdf")