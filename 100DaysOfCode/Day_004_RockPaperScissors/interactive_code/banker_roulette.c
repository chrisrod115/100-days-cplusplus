/*
"""METHOD 1: My personal method.
"""
# names = names_string.split(", ")
# # The code above converts the input into an array seperating
# #each name in the input by a comma and space.
# # 🚨 Don't change the code above 👆
# import random 
# print(random.choice(names) + " is going to buy the meal today!")

"""METHOD 2: Other methods.
"""
import random 

names_string = "ben, tom, bob"
names = names_string.split(", ") 
# The code above converts the input into an array seperating
#each name in the input by a comma and space.
# 🚨 Don't change the code above 👆

num_items = len(names)

random_choice = random.randint(0, num_items - 1)
random_name = names[random_choice]
print(f"{random_name} is going to buy the meal today!")
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(){
    srand(time(NULL)); 
    char name_strings[3][5] = {"ben", "tom", "bob"};
    int r = rand() % 3;
    char rand_name[5];
    strcpy(rand_name, name_strings[r]);

    printf("%s, is going to buy the meal today!", rand_name);

    return 0;
}