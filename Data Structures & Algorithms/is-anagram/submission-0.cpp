class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>mp;
        for(auto i:s)
        {
            mp[i]++;
        }
        for(auto j:t)
        {
            mp[j]--;
        }
        for(auto k:mp)
        {
            if(k.second!=0)
            {
                return false;
            }
        }
        return true;
    }
};
