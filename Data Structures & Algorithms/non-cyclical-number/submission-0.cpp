class Solution {
public:
    bool isHappy(int n) 
    {
        int slow=n,fast=SumOfSquares(n);
        while(slow!=fast)
        {
            slow=SumOfSquares(slow);
            fast=SumOfSquares(SumOfSquares(fast));
        }
        return fast==1;
    }
    private:
    int SumOfSquares(int n)
    {
        int output=0;
        while(n!=0)
        {
            output=output+((n%10)*(n%10));
            n=n/10;
        }
        return output;
    }
};
