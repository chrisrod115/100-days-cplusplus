#include <stdio.h>

int main() {
    int nums[3];
    int i = 0, min = 0, max = 0;

    for (i = 0; i < 3; i++)
    {
        printf("Enter num%d: ", i + 1);
        scanf("%d", &nums[i]);
    }
    min = nums[0];
    for (i = 0; i < (sizeof(nums)/sizeof(nums[0])); i ++)
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

    printf("The max is: %d and the min is: %d", max, min);
    return 0;
}
