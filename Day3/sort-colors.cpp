#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int l = 0;
        int m = 0;
        int h = nums.size() - 1;

        while (m <= h) {
            if (nums[m] == 0) {
                swap(nums[l], nums[m]);
                l++;
                m++;
            } else if (nums[m] == 1) {
                m++;
            } else if (nums[m] == 2) {
                swap(nums[m], nums[h]);
                h--;
            }
        }
    }
};

int main() {
    Solution sol;
    vector<int> nums = {2, 0, 2, 1, 1, 0};
    sol.sortColors(nums);

    cout << "Sorted colors: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
