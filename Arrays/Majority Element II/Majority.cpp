#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {

        /*

        Brute -> ( O (n Log n) )
        vector<int> result;
        int window = nums.size() / 3;
        if(window == 0){
            return nums;
        }

        sort(nums.begin() , nums.end());
        int num = nums[0];
        int freq = 1;

        for(int i = 1 ; i < nums.size() ; i++){
            if(nums[i] == num){
                freq++;
            }else{
                if(freq > window){
                    result.push_back(num);
                }
                num = nums[i];
                freq = 1;
            }
        }

        if(freq > window){
            result.push_back(num);
        }

        return result;
        
        */
    }
};

int main() {
    Solution obj;

    vector<int> nums = {1, 2, 1, 2, 1, 2, 3, 3, 3, 4, 4};

    vector<int> result = obj.majorityElement(nums);

    for (int num : result) {
        cout << num << " ";
    }

    return 0;
}