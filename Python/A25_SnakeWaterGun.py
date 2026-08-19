import random
# def playerPlays():
#     return input("Choose between rock, paper, and scissors: ")
# def computerPlays():
#     choices = ["rock", "paper", "scissors"]
#     return random.choice(choices)
# def getGameResult(player_choice, computer_choice):
#     rules = {
#         "rock": {"rock": "It's a draw", "paper": "You lose", "scissors": "You win"},
#         "paper": {"rock": "You win", "paper": "It's a draw", "scissors": "You lose"},
#         "scissors": {"rock": "You lose", "paper": "You win", "scissors": "It's a draw"}
#     }
#     return rules[player_choice][computer_choice]
# while True:
#     player_choice = playerPlays()
#     computer_choice = computerPlays()
#     print(f"Computer plays: {computer_choice}.")
#     game_play = getGameResult(player_choice, computer_choice)
#     print(game_play)
#     if "lose" in game_play:
#         print(f"You lost to the computer. Thanks for playing, {name}!")
#         break
def check(comp,user):
    if comp == user:
        return
    
    if comp == 0 and user == 1:
        return -1

    if comp== 1 and user == 2:
        return
    if(comp == 2 and user == 0):
        return -1
    
    return 1
comp = random.randint(0,2) 
user = int(input(" 0 for snake, 1 for water, -1 for gun : "))
print("you : " ,user)
print("comp : ", comp)
score = check(comp,user)
if(score == 0):
    print("It's a draw")
elif score == 1:
    print("you win")
else:
    print("you lose")