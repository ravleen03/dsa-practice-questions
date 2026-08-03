class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) 
    {
        int x=nums.size()/3;
        vector<int>res;
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        for(auto it:mp)
        {
            if(it.second>x)
            res.push_back(it.first);
        }
        return res;
        
    }
};