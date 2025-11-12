class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int minprice = INT_MAX;
        int maxprofit = 0;
        
        for(int i=0 ; i<prices.size() ; i++){

            minprice = min(minprice , prices[i]);
            maxprofit = max( maxprofit , prices[i] - minprice);
            
        }
        return maxprofit;
    

        // int n = prices.size();
        // int maxi = INT_MIN;
        // int profit = 0;
        // for(int i = 0; i<n ; i++){
        //     for(int j = i+1 ; j<n ; j++ ){
        //         profit = abs(prices[i] - prices[j]);
        //         maxi = max(maxi , profit);
        //     }
        // }
        // return maxi;

    }

};