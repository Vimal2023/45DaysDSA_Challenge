#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    bool validPalindrome(string s) {
        int left = 0;
        int right = s.length() - 1;

        while (left < right) {
            if (s[left] == s[right]) {
                left++;
                right--;
            } else {
                return isPalindrome(s, left + 1, right) || isPalindrome(s, left, right - 1);
            }
        }
        return true;
    }

private:
    bool isPalindrome(const string &s, int left, int right) {
        while (left < right) {
            if (s[left] == s[right]) {
                left++;
                right--;
            } else {
                return false;
            }
        }
        return true;
    }
};

int main() {
    Solution solution;
    string test1 = "aba";
    string test2 = "abca";
    string test3 = "abc";
    cout << "Test 1: " << solution.validPalindrome(test1) << endl; // Output: 1 (true)
    cout << "Test 2: " << solution.validPalindrome(test2) << endl; // Output: 1 (true)
    cout << "Test 3: " << solution.validPalindrome(test3) << endl; // Output: 0 (false)

    return 0;
}
