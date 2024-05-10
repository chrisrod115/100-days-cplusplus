/*
Python Version: 

print("Welcome to Treasure Island.")
print("Your mission is to find the treasure.")
print("You're at a cross road. Where do you want to go? Type 'left' or 'right'.")
user_choice = input()
if (user_choice == "left"):
    print("You come to a lake. There is an island in the middle of the lake. Type 'wait' to wait for a boat. Type 'swim' to swim across.")
    user_choice = input()
    if (user_choice == "wait"):
        print("You arrive at the island unharmed. There is a house with 3 doors. One red, one yellow and one blue. Which colour do you choose?")
        user_choice = input()
        if (user_choice == "red"):
            print("It's a room full of fire. Game Over.")
        elif (user_choice == "yellow"):
            print("You found the treasure! You Win!")
        elif (user_choice == "blue"):
            print("You enter a room of beasts. Game Over.")
        else:
            print("You chose a door that doesn't exist. Game Over.")
    else:
        print("You get attacked by an angry trout. Game Over.")
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){
    char u_input1[20];
    char u_input2[20];
    char u_input3[20];

    printf("Welcome to Treasure Island.\n");
    printf("Your mission is to find the treasure.\n");
    printf("You're at a cross road. Where do you want to go? Type 'left' or 'right'. ");
    scanf("%s", u_input1);

    if (strcmp(u_input1, "left") == 0) 
    {
        printf("You come to a lake. There is an island in the middle of the lake. Type 'wait' to wait for a boat. Type 'swim' to swim across.\n");
        scanf("%s", u_input2);
    }
    if (strcmp(u_input2, "wait") == 0)
    {
        printf("You arrive at the island unharmed. There is a house with 3 doors. One red, one yellow and one blue. Which colour do you choose?\n");
        scanf("%s", u_input3);
        if (strcmp(u_input3, "red") == 0)
        {
            printf("It's a room full of fire. Game Over.\n");
        }
        else if (strcmp(u_input3, "yellow") == 0)
        {
            printf("You found the treasure! You Win!\n");
        }
        else if (strcmp(u_input3, "blue") == 0)
        {
            printf("You enter a room of beasts. Game Over.\n");
        }
        else
        {
            printf("You chose a door that doesn't exist. Game Over.\n");
        }
    }
        
    else
    {
        printf("You get attacked by an angry trout. Game Over.\n");
    }

}