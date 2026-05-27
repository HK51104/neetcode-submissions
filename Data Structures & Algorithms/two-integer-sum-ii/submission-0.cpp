class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        for(int i=0;i<numbers.size();i++)
        {
            for(int j=0;j<numbers.size();j++)
            {
                int sum =numbers[i]+numbers[j];
                if(i!=j && sum==target)
                {
                    return {i+1,j+1};
                }
            }
        }
    }
};
