class Solution {
public:
    bool isPalindrome(string s) 
    {
        int fp=0,rp=s.length()-1;
        while(fp<rp)
        {
            while(fp<rp && !IsAlphaNum(s[fp]))
            {
                fp++;
            }
            while(fp<rp&&!IsAlphaNum(s[rp]))
            {
                rp--;
            }
            if(tolower(s[fp])!=tolower(s[rp]))
            {
                return false;
            }
            fp++;
            rp--;
        }
        return true;
    }
    private:
    bool IsAlphaNum(char c)
    {
        return 
        (
            c>='A' && c<='Z' ||
            c>='a'&& c<='z' ||
            c>='0' && c<='9'
        );
    }
};
