#include <stdio.h>
#include <stdlib.h>
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* numbers, int numbersSize, int target, int* returnSize) {
    int* res = (int*) malloc(sizeof(int)*2); 
    *returnSize = 2; //by assumption there is a solution

    int idxFirstPointer = 0; 
    int idxLastPointer = numbersSize -1; 
    int* firstPointer = numbers; 
    int* lastPointer = numbers + numbersSize -1; 
    while(*firstPointer + *lastPointer != target) {
        if(*firstPointer + *lastPointer > target) {
            lastPointer--; 
            idxLastPointer--; 
        } else {
            firstPointer++; 
            idxFirstPointer++;
        }
    }
    // printf("Found at idx (%d %d) -> %d + %d = %d\n", idxFirstPointer, idxLastPointer, *firstPointer, *lastPointer, target); 

    res[0] = idxFirstPointer+1; 
    res[1] = idxLastPointer +1;
    return res; 
}


int main(int argc, char** argv) {
    int nums[] = {2,7,11, 15}; 
    int target = 9; 
    int numbersSize = sizeof(nums)/ sizeof(*nums); 
    int resSize; 
    twoSum(nums, numbersSize, target, &resSize); 

}