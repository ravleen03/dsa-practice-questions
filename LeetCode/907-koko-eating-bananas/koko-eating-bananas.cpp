class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) 
    {
        int i,maxi=INT_MIN,n=piles.size();
        long long x;
        int low=1,mid,ans;
        for(i=0;i<n;i++)
        {
            maxi=max(maxi,piles[i]);
        }
        int high=maxi;
        while(low<=high)
        {
            mid=low+(high-low)/2;
            x=minhours(piles,mid);
            if(x<=h)
            {
            high=mid-1;
            ans=mid;
            }
            else
            {
            low=mid+1;
            }
        }
        return ans;
    }
    public:
    long long minhours(vector<int>& piles,int mid)
    {
        long long totalhrs=0;
        for(int i=0;i<piles.size();i++)
        {
            totalhrs+=ceil((double)piles[i]/mid);
        }
        return totalhrs;
    }
};