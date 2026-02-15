class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) 
    {
        int high=0,low=0,maxi=INT_MIN,i,n=weights.size(),mid,caldays,res;
        for(i=0;i<n;i++)
        {
            maxi=max(maxi,weights[i]);
            high=high+weights[i];
        }
        low=maxi;
        while(low<=high)
        {
            mid=low+(high-low)/2;
            caldays=findday(weights,mid);
            if(caldays>days)
            low=mid+1;
            else
            {
               high=mid-1;
               res=mid;
            }
        }
        return res;
    }
public:
  int findday(vector<int>& weights,int mid)
  {
    int i,sum=0,tdays=1;
    for(i=0;i<weights.size();i++)
    {
        if(sum+weights[i]>mid)
        {
            tdays++;
            sum=weights[i];
        }
        else 
        sum=sum+weights[i];
    }
    return tdays;
  }
};