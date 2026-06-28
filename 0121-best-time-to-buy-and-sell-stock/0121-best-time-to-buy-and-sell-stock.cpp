class Solution {
public:
    int maxProfit(vector<int>& prices) {
         int maxProfit=0,bestBuy=prices[0];
    for(int price:prices){
        bestBuy=price<bestBuy?price:bestBuy;
        maxProfit=max(maxProfit,price-bestBuy);
    }
    return maxProfit;
    }
};