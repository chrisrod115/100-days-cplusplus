/*
"""METHOD 1: My attempt --> too complicated can be simplified with (method 2) below.
"""
# line1 = ["⬜️","️⬜️","️⬜️"]
# line2 = ["⬜️","⬜️","️⬜️"]
# line3 = ["⬜️️","⬜️️","⬜️️"]
# map = [line1, line2, line3]
# print("Hiding your treasure! X marks the spot.")
# position = input() # Where do you want to put the treasure?
# # 🚨 Don't change the code above 👆
# # Write your code below this row 👇
# position.upper()
# # print(map) # Used this to see how the list was formatted. 
# column = ["A", "B", "C"]
# row = [0, 1, 2]
# p_col = position[0]
# p_row = int(position[1]) - 1
# for y in range(3):
#     if p_row == row[y]:
#         for x in range(3):
#             if p_col == column[x]:
#                 map[y][x] = "X"
    

# # Write your code above this row 👆
# # 🚨 Don't change the code below 👇
# print(f"{line1}\n{line2}\n{line3}")

"""METHOD 2: Second method provided by instructor, which is using the index attribute. 
"""
line1 = ["⬜️","️⬜️","️⬜️"]
line2 = ["⬜️","⬜️","️⬜️"]
line3 = ["⬜️️","⬜️️","⬜️️"]
map = [line1, line2, line3]
print("Hiding your treasure! X marks the spot.")
position = input() # Where do you want to put the treasure?
# 🚨 Don't change the code above 👆
# Write your code below this row 👇
letter = position[0].lower()
abc = ["a", "b", "c"]
letter_index = abc.index(letter)
number_index = int(position[1]) - 1
map[number_index][letter_index] = "X"
    

# Write your code above this row 👆
# 🚨 Don't change the code below 👇
print(f"{line1}\n{line2}\n{line3}")
*/
#include <stdio.h>

#define ROWS 3
#define COLS 3

int main() {
    // Define a 2D array to represent the map
    char map[ROWS][COLS] = {
        {'.', '.', '.'},
        {'.', '.', '.'},
        {'.', '.', '.'}
    };

    // Print the initial map
    printf("Initial Map:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%c ", map[i][j]);
        }
        printf("\n");
    }

    // Prompt the user for input
    printf("\nEnter a letter for the column (A, B, or C): ");
    char column;
    scanf(" %c", &column); // Note the space before %c to consume any leading whitespace

    printf("Enter a number for the row (1, 2, or 3): ");
    int row;
    scanf("%d", &row);

    // Convert user input to array indices
    // Convert user input to array indices using switch statement
    int colIndex;
    switch (column) {
        case 'A':
        case 'a':
            colIndex = 0;
            break;
        case 'B':
        case 'b':
            colIndex = 1;
            break;
        case 'C':
        case 'c':
            colIndex = 2;
            break;
        default:
            printf("Invalid input for column. Please enter A, B, or C.\n");
            return 1; // Exit the program with an error code
    }
    int rowIndex = row - 1; // Adjust row number to zero-based index

    // Update the map
    if (rowIndex >= 0 && rowIndex < ROWS && colIndex >= 0 && colIndex < COLS) {
        map[rowIndex][colIndex] = 'X';
    } else {
        printf("Invalid input. Cell coordinates out of range.\n");
    }

    // Print the modified map
    printf("\nModified Map:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%c ", map[i][j]);
        }
        printf("\n");
    }

    return 0;
}
