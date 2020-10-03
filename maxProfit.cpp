class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        int size = prices.size();
        if(size<=1)return maxProfit;
        maxProfit = (prices[0]<prices[1])? (prices[1]-prices[0]):0;
        int min =(prices[0]>prices[1])? prices[1]:prices[0];
        for(int index=2;index<size;++index){
            if(prices[index]>min){
                maxProfit = std::max(prices[index]-min,maxProfit);
            }else{
                min = prices[index];
            }
        }
        return maxProfit;
    }
};