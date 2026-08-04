class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) 
    {
        int n=nums.size(),j,k;
        long long sum;
        vector<vector<int>>res;
        sort(nums.begin(),nums.end());
        for(int l=0;l<n-3;l++)
        {
            if(l>0 && nums[l]==nums[l-1])
            continue;
            for(int i=l+1;i<n-2;i++)
            {
                if(i>l+1 && nums[i]==nums[i-1])
                continue;
                j=i+1;
                k=n-1;
                while(j<k)
                {
                    sum=1LL*nums[i]+nums[l]+nums[j]+nums[k];
                    if(sum==target)
                    {
                        res.push_back({nums[l],nums[i],nums[j],nums[k]});
                        j++;
                        k--;
                        while(j<k && nums[j]==nums[j-1])
                        j++;
                        while(j<k && nums[k]==nums[k+1])
                        k--;
                    }
                    else if(sum<target)
                    j++;
                    else
                    k--;
                }
            }
        }
        return res;
        
    }
};