#include <stdio.h>

#define SIZE 7

int two_sum(int* arr, int size, int tar) {
    int seen[1000] = {0};  // Auxiliary array to keep track of seen elements

    for (int i = 0; i < size; i++) {
        int diff = tar - arr[i];

        // Check if diff is already seen
        if (diff >= 0 && seen[diff]) {
            printf("Pair found: (%d, %d)\n", diff, arr[i]);
            return 1;  // Return 1 if pair found
        }

        // Mark this element as seen
        if (arr[i] < 1000) {  // Ensure index is within bounds
            seen[arr[i]] = 1;
        }
    }

    printf("No pair found\n");
    return 0;  // Return 0 if no pair found
}

int main() {
    int arr[SIZE] = {1, 3, 4, 7, 9, 10, 12};
    int target = 13;
    two_sum(arr, SIZE, target);
    return 0;
}
