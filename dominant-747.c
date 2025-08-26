#include <stdio.h>
#include <limits.h>

int dominantIndex(int* nums, int numsSize) {
    int currentMaximum = INT_MIN; 
    int idxMax = -1;
    for(int i = 0; i<numsSize; i++) { 
        if(nums[i] > currentMaximum) {
            currentMaximum = nums[i];
            idxMax = i;
        }
    }
    for(int i = 0; i<numsSize; i++) { 
        if(i != idxMax && 2*nums[i] > currentMaximum)
            return -1; 
    }
    return idxMax;  
}

int main(int argc, char** argv) {
    return 0;  
}