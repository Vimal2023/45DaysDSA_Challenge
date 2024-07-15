#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt = 0;
        int el;
        for(int i = 0; i < nums.size(); i++) {
            if(cnt == 0) {
                cnt = 1;
                el = nums[i];
            } else if (nums[i] == el) {
                cnt++;
            } else {
                cnt--;
            }
        }
        int cn1 = 0;
        for(int i = 0; i < nums.size(); i++) {
            if (nums[i] == el) cn1++;
        }
        if(cn1 > (nums.size() / 2)) {
            return el;
        }
        return -1;
    }
};

int main() {
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};
    Solution ob;
    int result = ob.majorityElement(nums);
    cout << "The majority element in the array is: " << result << endl;
    return 0;
}
