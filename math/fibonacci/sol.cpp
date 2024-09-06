class Solution {
public:
    int fib(int n) {
        if (n == 0) {
            return 0;
        } else {
            int n0 = 0;
            int n1 = 1;
            int result = 1;
            for (int i = 2; i <= n; i++) {
                result = n0 + n1;
                n0 = n1;
                n1 = result;
            }
            return result;
        }
    }

};
