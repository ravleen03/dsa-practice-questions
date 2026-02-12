class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) 
    {
        if((long long)m * k > bloomDay.size())
        return -1;
        int low=1,ans=-1,tcnt,maxi=INT_MIN,high,mid,i,n=bloomDay.size();
        for(i=0;i<n;i++)
        {
            maxi=max(maxi,bloomDay[i]);
        }
        high=maxi;
        while(low<=high)
        {
            mid=low+(high-low)/2;
            tcnt=bouquets(bloomDay,mid,k);
            if(tcnt>=m)
            {
                high=mid-1;
                ans=mid;
            }
            else
            low=mid+1;
        }
        return ans;
        
    }
public:
    int bouquets(vector<int>& bloomDay, int mid,int k)
    {
        int tcnt=0,cnt=0;
        for(int i=0;i<bloomDay.size();i++)
        {
            if(bloomDay[i]<=mid)
            {
                cnt++;
                if(cnt==k)
                {
                tcnt++;
                cnt=0;
                }
            }
            else 
            cnt=0;
        }
        return tcnt;
    }
};