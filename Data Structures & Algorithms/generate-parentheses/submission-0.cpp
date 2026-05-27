class Solution {
public:
    void backtracking(int open,int close ,int n,vector<string>&res, string &s)
    {
        if(open==close && open==n)
        {
            res.push_back(s);
            return;
        }
        if(open<n)
        {
            s=s+"(";
            backtracking(open+1,close,n,res,s);
            s.pop_back();
        }
        if(close<open)
        {
            s=s+")";
            backtracking(open,close+1,n,res,s);
            s.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        string s;
        vector<string>res;
        backtracking(0,0,n,res,s);
        return res;
    }
};
