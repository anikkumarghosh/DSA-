class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int profit=0; 
        int mini=prices[0];
        for (int i =0; i< prices.size();i++){
            int cost = prices[i]-mini;
            profit = max(profit,cost);
            mini=min(mini,prices[i]);
        }
        return profit;

        //trying another approach
        // int first=0,last=prices.size()-1,mini=INT_MAX,maxi=INT_MIN,profit=0;
        // while(first<last){
        //     mini=min(prices[first],mini);
        //     maxi = max(prices[last],maxi);
        //     profit = max(profit,maxi-mini);

        //     last--;
        //     first++;

        // }
        // return profit;
        //timeline violation
    }
};