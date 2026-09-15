#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int maxSum = INT_MIN;
        int curSum = 0;

        for(int i = 0 ; i < nums.size() ; i++){
            curSum+=nums[i];

            if(curSum < 0){
                curSum = 0;
            }
            maxSum = max(curSum , maxSum);
            
        }
        
        return maxSum;
    }
};

int main() {
    Solution sol;

    vector<int> nums = {3,-4,5,4,-1,7,-8};

    int result = sol.maxSubArray(nums);

    cout << "Maximum subarray sum: " << result << endl;

    return 0;
}