#include <stdio.h>

int pivotIndex(int* nums, int numsSize) {

    for(int pivotIdx = 0; pivotIdx<numsSize; pivotIdx++) {
        int leftSum = 0; 
        int rightSum = 0; 
        for(int i = 0; i<pivotIdx; i++) {
            leftSum += nums[i]; 
        }
        for(int i = pivotIdx+1; i<numsSize; i++) {
            rightSum += nums[i];
        }
        if(leftSum == rightSum)
            return pivotIdx; 
    }
    return -1; 
}

int main(int argc, char** argv) {
    int nums[] = { 1,7,3,6,5,6 };
    int res = pivotIndex(nums, sizeof(nums) / sizeof(*nums)); 
    printf("res = %d\n", res); 
}