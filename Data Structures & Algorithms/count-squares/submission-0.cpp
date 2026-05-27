class CountSquares 
{
    unordered_map<int,unordered_map<int,int>> ptsCount;
public:
    CountSquares() 
    {
        
    }
    
    void add(vector<int> point) 
    {
        ptsCount[point[0]][point[1]]++;
    }
    
    int count(vector<int> point) 
    {
        int res=0;
        int x1=point[0],y1=point[1];

        for(auto &[i,j]:ptsCount[x1])
        {
            int side=i-y1;
            if(side==0)
            {
                continue;
            }
            int x3=x1+side,x4=x1-side;
            res+=j * ptsCount[x3][y1] * ptsCount[x3][i];
            res+=j * ptsCount[x4][y1] * ptsCount[x4][i];
        }        
        return res;
    }
};
