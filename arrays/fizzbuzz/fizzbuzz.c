#include <stdlib.h>
#include <stdio.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** fizzBuzz(int n, int* returnSize) {
    char** result = (char**)malloc(n * sizeof(char*));
    
    if (result == NULL) {
        return NULL;
    }

    *returnSize = n;

    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            result[i-1] = (char*)malloc(9 * sizeof(char));
            sprintf(result[i-1], "FizzBuzz");
        } else if (i % 3 == 0) {
            result[i-1] = (char*)malloc(5 * sizeof(char)); 
            sprintf(result[i-1], "Fizz");
        } else if (i % 5 == 0) {
            result[i-1] = (char*)malloc(5 * sizeof(char));
            sprintf(result[i-1], "Buzz");
        } else {
            result[i-1] = (char*)malloc(12 * sizeof(char));
            sprintf(result[i-1], "%d", i); 
        }
    }

    return result;
}
