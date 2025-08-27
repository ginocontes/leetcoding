#include <stdio.h>
#include <string.h>


int strStr(char* haystack, char* needle) {
    int current = 0; 
    int start = 0; 
    int n = strlen(needle); 
    int j = 0; 
    while(*haystack != '\0') {
        if(*haystack == needle[current]) {
            current++;
            if(current == n) {
                return start; 
            } 
        } else {
            current = 0 ; 
            start = j; 
        }
        haystack++;
        j++; 
    }
    return -1; 
}

int main(int argc, char** argv) {
    char* s = "mississipi";
    char* needle = "issip" ; 
    int res = strStr(s, needle); 
    printf("res = %d\n", res); 
}