#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    void bubbleSort(vector<int>& nums) {
        
       for(int i = 0 ; i<nums.size() ;i++){

        for(int j = 0 ; j < nums.size()-1 ; j++){

            if(nums[j] > nums[j+1]){
                swap(nums[j] , nums[j+1]);
            }
        }
       }
    }
};

int main() {

    vector<int> nums = {5, 3, 8, 4, 2, 1};

    Solution obj;
    obj.bubbleSort(nums);

    // Print the sorted array
    for (int num : nums) {
        cout << num << " ";
    }

    return 0;
}