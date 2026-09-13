#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// This is the Solution that i came up with :-
/*
class Solution {
public:
    int majorityElement(vector<int>& nums) {

        if(nums.size() == 1){
            return nums[0];
        }

        sort(nums.begin(), nums.end());

        int maj = nums.size() / 2;

        int count = 1;
        int num = nums[0];

        for(int i = 1; i < nums.size(); i++){

            if(nums[i] == num){
                count++;

                if(count > maj){
                    return num;
                }
            }
            else{
                num = nums[i];
                count = 1;
            }
        }

        return 0;
    }
};

*/

// Moore's Algorithm , is what i am going to learn today because this the approach of solving this problem .

/*
The algorithm states that if there is an element in the majority, then if we start counting the frequency of every element
The highest frequency will be of the element which is in the majority , basically, we will not sort the array this time
We will start from the first number we will take frequency as one and the answer as nums[0],
After that, if we found the same element again in the area, we will increase the frequency otherwise, if there is any other element instead of
Resetting the frequency and the answer, we will decrease the frequency by 1 we do this because the array is not sorted
And the element which was at the first index can show up later

Even if we minus the frequency because of the element, which is in the majority, it will never be cancelled out by other elements
because it is in the majority because of < N/2 .
*/

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int freq = 0 , ans = 0;

        for(int i = 0 ; i < nums.size() ;i++){
            if(freq == 0){
                ans = nums[i];
            }

            if(nums[i] == ans){
                freq++;
            }else{
                freq--;
            }
        }

        return ans;
    }
};

/*

{1, 2, 2, 1, 1,}

freq will look like :- 0 , 1 , 0 , 1 , 0 ,1
ans will look like :- 0 , 1 , 2 , 1

*/

int main() {

    Solution solution;

    vector<int> nums = {1, 2, 2, 1, 1,};

    int result = solution.majorityElement(nums);

    cout << "Majority Element: " << result << endl;

    return 0;
}
