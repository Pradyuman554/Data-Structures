class Solution {
public:
    double myPow(double x, int n) {
        // Special case for INT_MIN
        if (n == INT_MIN) {
            if (x == 1.0) return 1.0;
            if (x == -1.0) return 1.0; // -1^INT_MIN is 1
            return 0; // For any other x, result is 0 due to overflow
        }
        
        // Handle positive and negative powers
        if (n < 0) {
            x = 1 / x;
            n = -n;
        }
        
        return powRecursive(x, n);
    }

private:
    // Helper function to compute x^n
    double powRecursive(double x, int n) {
        if (n == 0) return 1.0; // Base case
        if (n % 2 == 0) {
            double half = powRecursive(x, n / 2);
            return half * half;
        } else {
            return x * powRecursive(x, n - 1);
        }
    }
};