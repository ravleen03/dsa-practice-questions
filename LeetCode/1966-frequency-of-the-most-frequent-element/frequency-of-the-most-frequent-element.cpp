class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) 
    {
        int l=0,r,n=nums.size(),result=0;
        long long windowsum=0,currsum=0,ops,target;
        sort(nums.begin(),nums.end());
        for(r=0;r<n;r++)
        {
            target=nums[r];
            currsum+=nums[r];
            windowsum=target*(r-l+1);
            ops=windowsum-currsum;
            if(ops>k)
            {
                currsum-=nums[l];
                l++;
                ops=target*(r-l+1)-currsum;
            }
            result=max(result,r-l+1);

        }
        return result;

        
    }
};