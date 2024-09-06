#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* longestCommonPrefix(char** strs, int strsSize) {
    if (strsSize == 0) {
        return "";
    }

    char* result = (char*)malloc(1000 * sizeof(char));
    if (result == NULL) {
        return NULL; 
    }

    strcpy(result, strs[0]);

    for (int i = 1; i < strsSize; i++) {
        int j = 0;

        while (result[j] && strs[i][j] && result[j] == strs[i][j]) {
            j++;
        }

        result[j] = '\0';

        if (j == 0) {
            return "";
        }
    }

    return result;
}
