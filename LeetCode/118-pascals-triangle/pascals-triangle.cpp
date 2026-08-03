class Solution {
public:
    vector<vector<int>> generate(int numRows) 
    {
        vector<vector<int>>nums;
        for(int i=0;i<numRows;i++)
        {
            nums.push_back(vector<int>(i + 1));
            for(int j=0;j<=i;j++)
            {
                if(j==0||j==i)
                nums[i][j]=1;
                else
                nums[i][j]=nums[i-1][j-1]+nums[i-1][j];
            }
        }
        return nums;
        
    }
};