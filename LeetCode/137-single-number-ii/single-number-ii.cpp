class Solution {
public:
    int singleNumber(vector<int>& nums) 
    {
        vector<int>x(32,0);
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=0;j<32;j++)
            {
                if(nums[i]&(1u<<j))
                    x[j]++;
            }
        }
        for(int j=0;j<32;j++)
        {
            x[j]=x[j]%3;
            if(x[j])
            ans=ans|(1u<<j);
        }
        return ans;
         
    }
};