class Solution {
public:
    int search(vector<int>& nums, int target) 
    {
        int mid,ind=-1,n=nums.size();
        int beg=0;
        int end=n-1;
        while(beg<=end)
        {
            mid=(beg+end)/2;
            if(nums[mid]==target)
            {
            ind=mid;
            break;
            }
            else if(target>nums[mid])
            beg=mid+1;
            else 
            end=mid-1;

        }
        return ind;
    }
};