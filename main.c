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

int pivotIndex2(int* nums, int numsSize) {
    int sum = 0; 
    for(int i= 0; i<numsSize; i++) {
        sum += nums[i]; 
    }
    int leftSum = 0; 
    for(int i = 0; i<numsSize; i++) {
        printf("it %d - Left sum -> %d | sum - leftSum = %d\n", i, leftSum, sum -leftSum); 
        if(leftSum + nums[i] == sum - leftSum) return i; 
        leftSum += nums[i]; 
    }
    return -1; 
}

int main(int argc, char** argv) {
    int nums[] = { 1,7,3,6,5,6 };
    int res = pivotIndex2(nums, sizeof(nums) / sizeof(*nums)); 
    printf("res = %d\n", res); 
}