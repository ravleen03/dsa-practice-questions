class Solution {
public:
    bool lemonadeChange(vector<int>& bills) 
    {
        int cnt5=0,cnt10=0,cnt20=0,n=bills.size();
        for(int i=0;i<n;i++)
        {
            if(bills[i]==5)
            cnt5++;
            else if(bills[i]==10 && cnt5!=0)
            {
                cnt10++;
                cnt5--;
            }
            else if(bills[i]==20 &&(cnt5>=3 || (cnt10>=1 && cnt5!=0)))
            {
                if(cnt10>=1)
                {
                    cnt10--;
                    cnt5--;

                }
                else 
                cnt5-=3;
                cnt20++;
            }
            else 
            return false;
        }
        return true;
        
    }
};