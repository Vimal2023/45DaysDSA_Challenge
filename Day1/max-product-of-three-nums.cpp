#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        return max(nums[n-1] * nums[n-2] * nums[n-3], nums[0] * nums[1] * nums[n-1]);
    }
};

int main() {
    vector<int> nums = {1, 2, 3, 4};
    Solution ob;
    int result = ob.maximumProduct(nums);
    cout << "The maximum product of three numbers in the array is: " << result << endl;
    return 0;
}
