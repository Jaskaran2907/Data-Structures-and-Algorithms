#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int profit = 0 ;

        for(int i = 0 ; i<prices.size() ; i++){
            int dayPrice = prices[i];

            for(int j = i+1 ; j < prices.size() ; j++){

                if(dayPrice < prices[j]){

                    int profitOnParticularDay = prices[j] - dayPrice;
                    profit = max(profit , profitOnParticularDay);
                    
                }
            }
            cout<<profit<<endl;
        }

        return profit;
        
    }
};

int main() {

    Solution obj;

    vector<int> prices = {100};

    int result = obj.maxProfit(prices);

    cout << "Maximum Profit: " << result << endl;

    return 0;
}