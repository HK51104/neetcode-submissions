class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> bucket;
        vector<vector<string>> res;
        for(auto x:strs)
        {
            string word=x;
            sort(word.begin(),word.end());
            bucket[word].push_back(x);
        }
        for(auto x:bucket)
        {
            res.push_back(x.second);
        }
        return res;
    }
};
