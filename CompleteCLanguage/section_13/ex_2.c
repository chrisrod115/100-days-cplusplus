#include <stdio.h>

int main() {
    int nums[3];
    int i, min, max;

    for (i = 0; i < 3; i++)
    {
        printf("Enter integer: ");
        scanf("%d", &nums[i]);
    }

    for (i = 0; i < 3; i++)
    {
        if (nums[i] < min)
        {
            min = nums[i];
        }
        if (nums[i] > max)
        {
            max = nums[i];
        }
    }
    // Print min and max values
    printf("Minimum value: %d\n", min);
    printf("Maximum value: %d\n", max);

    return 0;
}
