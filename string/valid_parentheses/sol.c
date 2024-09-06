bool isValid(char* s) {
    int len = strlen(s);
    char* stack = (char*) malloc(len);
    if (stack == NULL) return false;

    int top = -1;

    for (size_t i = 0; i < len; i++) {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
            stack[++top] = s[i];
        } else {
            if (top == -1) {
                free(stack);
                return false;
            }

            char topChar = stack[top--];
            if ((s[i] == ')' && topChar != '(') ||
                (s[i] == '}' && topChar != '{') ||
                (s[i] == ']' && topChar != '[')) {
                    free(stack);
                    return false;
                }
        }
    }

    bool isValid = (top == -1);
    free(stack);
    return isValid;
}
