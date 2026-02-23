class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) 
    {
        int left=0,right=0,n=g.size(),m=s.size();
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        while(left<m && right<n)
        {
            if(s[left]>=g[right]){
            
                left++;
                right++;
            }
            else 
            left++;
        }
        
        return right;
    }
};