#include <string.h>
#include <stdbool.h>

int strStr(char* haystack, char* needle) {
    size_t haystack_len = strlen(haystack);
    size_t needle_len = strlen(needle);
    
    if (needle_len > haystack_len) return -1;

    for (size_t i = 0; i <= haystack_len - needle_len; i++) {
        bool match = true;
        
        for (size_t j = 0; j < needle_len; j++) {
            if (haystack[i + j] != needle[j]) {
                match = false;
                break;
            }
        }

        if (match) {
            return i;
        }
    }

    return -1;
}
