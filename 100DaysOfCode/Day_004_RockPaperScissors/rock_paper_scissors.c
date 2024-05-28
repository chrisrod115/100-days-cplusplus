#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Enum for Rock, Paper, Scissors
typedef enum {
    ROCK = 1,
    PAPER,
    SCISSORS
} RPC;

// Function declarations
RPC get_user_choice();
RPC get_bot_choice();
const char* rpc_to_string(RPC choice);
int determine_winner(RPC user, RPC bot);

int main() {
    srand(time(NULL)); // Seed the random number generator

    printf("Rock Paper Scissors Game!!!\n");

    char play_again = 'y';

    while (play_again == 'y' || play_again == 'Y') {
        RPC user_choice = get_user_choice();
        RPC bot_choice = get_bot_choice();

        printf("You chose: %s\n", rpc_to_string(user_choice));
        printf("Bot chose: %s\n", rpc_to_string(bot_choice));

        int result = determine_winner(user_choice, bot_choice);

        if (result == 0) {
            printf("Sorry, you lost!\n");
        } else if (result == 1) {
            printf("You tied!\n");
        } else if (result == 2) {
            printf("Congrats, you won!\n");
        }

        printf("Would you like to play again? (y/n): ");
        scanf(" %c", &play_again);
    }

    printf("Thanks for playing!\n");
    return 0;
}

RPC get_user_choice() {
    int choice;
    printf("Make a selection by entering a number:\n");
    printf("1: Rock\n");
    printf("2: Paper\n");
    printf("3: Scissors\n");

    while (1) {
        printf("Your choice: ");
        scanf("%d", &choice);

        if (choice >= ROCK && choice <= SCISSORS) {
            return (RPC)choice;
        } else {
            printf("Invalid choice. Please try again.\n");
        }
    }
}

RPC get_bot_choice() {
    return (RPC)(rand() % 3 + 1); // Random number between 1 and 3
}

const char* rpc_to_string(RPC choice) {
    switch (choice) {
        case ROCK: return "Rock";
        case PAPER: return "Paper";
        case SCISSORS: return "Scissors";
        default: return "Unknown";
    }
}

int determine_winner(RPC user, RPC bot) {
    if (user == bot) {
        return 1; // Tie
    } else if ((user == ROCK && bot == SCISSORS) ||
               (user == PAPER && bot == ROCK) ||
               (user == SCISSORS && bot == PAPER)) {
        return 2; // User wins
    } else {
        return 0; // Bot wins
    }
}
