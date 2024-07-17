#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow = 0, fast = 0;

        do {
            slow = nums[slow];
            fast = nums[nums[fast]];
        } while (slow != fast);
        slow = 0;
        while (slow != fast) {
            slow = nums[slow];
            fast = nums[fast];
        }
        return slow;
    }
};

int main() {
    Solution sol;

    // Example usage
    vector<int> nums = {1, 3, 4, 2, 2};
    int duplicate = sol.findDuplicate(nums);
    cout << "The duplicate number is: " << duplicate << endl;

    return 0;
}
