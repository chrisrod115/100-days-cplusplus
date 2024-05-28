import random

rpc_dict = {
    1: 'rock',
    2: 'paper',
    3: 'scissors',
}

winner_results = {
    0: 'Sorry you lost!',
    1: 'You tied!',
    2: 'Congrats you won!'
}

def rpc_return_str(user_int):
    return rpc_dict[user_int]


def bot_choice():
    bot = random.randint(1,3)
    return rpc_dict[bot]    


def rpc_game_logic(user, bot):
    if (user == bot):
        return 1
    elif ((user == 'paper') and (bot == 'scissors')):
        return 0
    elif ((user == 'rock') and (bot == 'paper')):
        return 0
    elif ((user == 'scissors') and (bot == 'rock')):
        return 0
    else:
        return 2

def start_game():
    print(f"{rpc_dict.items()}")
    user = int(input(f"Make a selection by entering number: "))
    bot = bot_choice()
    user_str = rpc_return_str(user)
    print(f"You chose: {user_str}, opponent chose: {bot}")
    result = rpc_game_logic(user=user_str, bot=bot)
    if result in winner_results:
        print(f"{winner_results[result]}")

def main():
    print("Rock Paper Scissor Game!!!")
    playing = True
    while playing:
        cont = str(input("Would you like to play?(yes/no)")).strip().lower()
        if cont != 'no':
            start_game()
        

if __name__ == '__main__':
    main()