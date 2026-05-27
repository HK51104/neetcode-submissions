class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l=0,r=l,MaxP=0;
        while(r<prices.size())
        {
            if(prices[l]<prices[r])
            {
            int profit=prices[r]-prices[l];
            MaxP=max(MaxP,profit);
            }
            else
            {
            l=r;
            }
            r++;
        }
    return MaxP;
    }
};
