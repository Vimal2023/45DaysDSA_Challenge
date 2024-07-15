#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0;
        for (int j = 0; j < nums.size(); j++) {
            if (nums[j] != 0)
                nums[i++] = nums[j];
        }

        while (i < nums.size())
            nums[i++] = 0;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {0, 1, 0, 3, 12};

    sol.moveZeroes(nums);

    for (int num : nums) {
        cout << num << " ";
    }

    return 0;
}
