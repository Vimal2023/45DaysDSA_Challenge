#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> mpp;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            int num = nums[i];
            int moreNeed = target - num;
            if (mpp.find(moreNeed) != mpp.end()) {
                return {mpp[moreNeed], i};
            }
            mpp[num] = i;
        }
        return {-1, -1};
    }
};

int main() {
    Solution sol;
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> result = sol.twoSum(nums, target);

    cout << "Indices of the two numbers that add up to " << target << " are: ";
    for (int idx : result) {
        cout << idx << " ";
    }
    cout << endl;

    return 0;
}
