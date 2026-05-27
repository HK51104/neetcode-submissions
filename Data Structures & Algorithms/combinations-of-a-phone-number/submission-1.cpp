class Solution {
public:
  
        vector<string>res;
        vector<string>digittochar={" "," ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
            
              vector<string> letterCombinations(string digits) 
              {
                if(digits.empty())
                {
                    return res;
                }
                else
                {
                    backtracking(digits,"",0);
                    return res;
                }
              }

            void backtracking(string &digits,string currentstring, int i)
            {   
                if(i==digits.size())
                {
                    res.push_back(currentstring);
                    return;
                }

            string characters=digittochar[digits[i]-'0'];
            for(char c:characters)
            {
                backtracking(digits,currentstring+c,i+1);
            }
            
        }
    };
