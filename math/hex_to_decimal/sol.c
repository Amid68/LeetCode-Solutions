#include <stdbool.h>

int hex_to_dec(const char *source) {
    int result = 0;
    bool isNegative = false;
    for (unsigned int i = 0; source[i]; i++) {
        result *= 16;
        if (source[i] >= '0' && source[i] <= '9') {
            result += source[i] - '0';  
        } else if (source[i] >= 'A' && source[i] <= 'F') {
            result += source[i] - 'A' + 10;  
        } else if (source[i] >= 'a' && source[i] <= 'f') {
            result += source[i] - 'a' + 10;  
        } else if (source[i] == '-') {
          	isNegative = true;
        } else {
          	return -1; 
        }
    }
    return isNegative ? -1 * result : result;
}
