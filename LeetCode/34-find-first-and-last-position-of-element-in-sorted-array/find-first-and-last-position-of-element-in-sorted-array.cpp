class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target)
    {
        int ans1=-1,ans2=-1,beg=0,low=0,n=nums.size(),mid;
        int high=n-1,end=n-1;
        vector<int>ans;
        while(beg<=end)
        {
            mid=(beg+end)/2;
            if(nums[mid]==target)
            {
                ans1=mid;
                end=mid-1;
            }
            else if(target<nums[mid])
            end=mid-1;
            else 
            beg=mid+1;
        }
        while(low<=high)
        {
            mid=(low+high)/2;
            if(nums[mid]==target)
            {
                ans2=mid;
                low=mid+1;
            }
            else if(target<nums[mid])
            high=mid-1;
            else 
            low=mid+1;
        }
        ans.push_back(ans1);
        ans.push_back(ans2);
        return ans;
        
    }
};