class Solution {
public:
    // Function to return a vector containing first n Fibonacci numbers.
    vector<long long> printFibb(int n) {
        vector<long long> result;
        if (n <= 0) {
            return result; // Return an empty vector for invalid input.
        }

        result.push_back(1); // First Fibonacci number
        if (n == 1) {
            return result; // Return vector with the first Fibonacci number.
        }

        result.push_back(1); // Second Fibonacci number
        for (int i = 2; i < n; i++) {
            long long nextFib = result[i - 1] + result[i - 2];
            result.push_back(nextFib);
        }

        return result;
    }
};