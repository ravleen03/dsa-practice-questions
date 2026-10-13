class Solution {
public:
    int minBitFlips(int start, int goal) {
        int x,cnt=0;
        x=start^goal;
        while(x!=0)
        {
            x=x&(x-1);
            cnt++;
        }
        return cnt;
    }
};