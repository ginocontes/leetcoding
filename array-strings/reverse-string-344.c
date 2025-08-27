#include <stdio.h>
#include <string.h>

void reverseString(char* s, int sSize) {
    char* startPointer = s; 
    char* endPointer = s + sSize -1; 
    while(startPointer < endPointer) {
        char temp = *startPointer; 
        *startPointer = (*endPointer); 
        *endPointer = temp; 
        startPointer++; 
        endPointer--; 
    }
}

int main(int argc, char** argv) {
    char mystr[] = "gino"; 
    printf("Before -> %s\n", mystr); 
    reverseString(mystr, strlen(mystr)); 
    printf("After -> %s\n", mystr); 
}