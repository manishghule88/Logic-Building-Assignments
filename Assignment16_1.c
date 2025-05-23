#include <stdio.h>
#include <stdlib.h>

void moveZeroes(int* nums, int numsSize) {
    int insertPos = 0;

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != 0) {
            nums[insertPos++] = nums[i];
            printf("Insert Position %d",nums[ insertPos ]);
        }
    }

    while (insertPos < numsSize) {
        
        nums[insertPos++] = 0;
    }
}

int main() {
    int size;
    printf("Enter the number of elements: ");
    scanf("%d", &size);

    int* nums = (int*)malloc(size * sizeof(int));
    if (!nums) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter %d integers:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &nums[i]);
    }

    moveZeroes(nums, size);

    printf("After moving zeroes: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");

    free(nums);
    return 0;
}
