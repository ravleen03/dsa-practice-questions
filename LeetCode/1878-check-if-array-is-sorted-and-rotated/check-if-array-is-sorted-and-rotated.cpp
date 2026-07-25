class Solution {
public:
    bool check(vector<int>& nums) 
    {
        int index;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]>nums[i+1])
            {
            index=i;
            break;
            }
        }
        reverse(nums.begin(),nums.begin()+index+1);
        reverse(nums.begin()+index+1,nums.end());
        reverse(nums.begin(),nums.end());
        return is_sorted(nums.begin(),nums.end());

        
    }
};