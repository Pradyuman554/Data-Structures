#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long countGoodIntegers(int n, int k) {
        auto generatePalindromes = [](int n) -> vector<long long> {
            vector<long long> palindromes;
            
            if (n <= 0) return palindromes;
            
            if (n % 2 == 0) {
                // Even length palindrome
                int half_length = n / 2;
                long long start = 1;
                for (int i = 1; i < half_length; ++i) {
                    start *= 10;
                }
                long long end = start * 10;
                for (long long i = start; i < end; ++i) {
                    string half = to_string(i);
                    string palindrome = half + string(half.rbegin(), half.rend());
                    palindromes.push_back(stoll(palindrome));
                }
            } else {
                // Odd length palindrome
                int half_length = n / 2;
                long long start = 1;
                for (int i = 1; i <= half_length; ++i) {
                    start *= 10;
                }
                long long end = start * 10;
                for (long long i = start; i < end; ++i) {
                    string half = to_string(i);
                    for (int j = 0; j < 10; ++j) {
                        string palindrome = half + to_string(j) + string(half.rbegin(), half.rend());
                        palindromes.push_back(stoll(palindrome));
                    }
                }
            }
            
            return palindromes;
        };

        vector<long long> palindromes = generatePalindromes(n);
        long long good_count = 0;
        for (long long p : palindromes) {
            if (p % k == 0) {
                ++good_count;
            }
        }
        return good_count;
    }
};