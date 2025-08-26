#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int* plusOne(int* digits, int digitsSize, int* returnSize) {
    int* res; 
    res = (int*) malloc(sizeof(int) * digitsSize); 
    memset(res, 0, digitsSize);
    *returnSize = digitsSize;
    int remainder = 1; 
    for(int i = digitsSize -1 ; i>=0; i--) {

        if(digits[i] + remainder < 10) {
            //copy remaining numbers and break from the loop
            res[i] = digits[i] + remainder;  
            remainder = 0; 
        } else {
            res[i] =(digits[i] + remainder) % 10; 
            remainder = 1; 
        }
    }

    if(remainder == 1) {
        //realloc
        int * res2 = malloc(sizeof(int) * (digitsSize + 1));
        memcpy(res2+1, res, sizeof(int)*digitsSize); 
        res2[0] = 1; 
        free(res); 
        *returnSize = *returnSize+1; 
        return res2; 
    }
    return res; 

}


int main(int argc, char** argv) {
    int digits[] = {8, 9,9, 9}; 
    int n; 
    int* res = plusOne(digits, 4, &n);
    for(int i = 0; i<n; i++) {
        printf("%d ", res[i]); 
    }
    printf("\n"); 

}