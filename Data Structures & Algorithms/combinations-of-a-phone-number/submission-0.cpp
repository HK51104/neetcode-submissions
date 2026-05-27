class Solution {
public:
    vector<string> res;
    vector<string> digitToChar = {"", "", "abc", "def", "ghi", "jkl", 
                                  "mno", "pqrs", "tuv", "wxyz"};

    vector<string> letterCombinations(string digits) {
        if (digits.empty())
        { 
            return res;
        }
        else
        {
            backtrack(0, "", digits);
            return res;
        }
    }

    void backtrack(int i, string currentString, string &digits) {
        if (currentString.size() == digits.size()) {
            res.push_back(currentString);
            return;
        }
        string chars = digitToChar[digits[i] - '0'];
        for (char c : chars) {
            backtrack(i + 1, currentString + c, digits);
        }
    }
};
