#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    void selectionSort(vector<int>& nums) {

        for(int i = 0; i < nums.size(); i++) {

        int minIndex = i;

        for(int j = i + 1; j < nums.size(); j++) {

            if(nums[j] < nums[minIndex]) {
                minIndex = j;
            }
        }

        swap(nums[i], nums[minIndex]);
        }
    }
};

int main() {

    vector<int> nums = {5, 3, 8, 4, 2, 1};

    Solution obj;
    obj.selectionSort(nums);

    for(int num : nums) {
        cout << num << " ";
    }

    return 0;
}