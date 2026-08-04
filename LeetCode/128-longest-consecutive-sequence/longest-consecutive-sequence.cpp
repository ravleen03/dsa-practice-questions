class Solution {
public:
    int longestConsecutive(vector<int>& nums) 
    {
        int largest=INT_MIN,lasts=INT_MAX,cnt=1;
        if(nums.size()==0)
        return 0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {

            if(nums[i]-1==lasts)
            {
                cnt++;
                lasts=nums[i];
            }
            else if(nums[i]==lasts)
            continue;
            else if(nums[i]!=lasts)
            {
                cnt=1;
                lasts=nums[i];
            }
            largest=max(largest,cnt);
        }
        return largest;
    }
};