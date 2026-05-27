class Solution {
public:
    int maxArea(vector<int>& heights) 
    {
         int l=0,r=heights.size()-1,Area=0,maxArea=0;
            while(l<r)
            {
            int width=r-l;
            Area=min(heights[l],heights[r])*(width);
            maxArea=max(Area,maxArea);
            if(heights[l]<heights[r])
            {
                l++;
            }
            else
            {
                r--;
            }
            
            } 
           
    return maxArea;
    }
};
