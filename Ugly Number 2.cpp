class Solution {
public:
    int nthUglyNumber(int n) {
        
        /*
        //Approach 1
        priority_queue<long, vector<long>, greater<long>> pq;
        pq.push(1);
        for (long i = 1; i < n; ++i) {
            long t = pq.top(); pq.pop();
            while (!pq.empty() && pq.top() == t) {
                t = pq.top(); pq.pop();
            }
            pq.push(t * 2);
            pq.push(t * 3);
            pq.push(t * 5);
        }
        return pq.top();
        
        */
        //Approach 2
        
        int nm2,nm3,nm5;//To store next multiples of 2,3 and 5
        int i2=0,i3=0,i5=0;
        vector<int>dp(1691);
        dp[0]=1;
        for(int i=1;i<n;i++)
        {
            nm2=dp[i2]*2;
            nm3=dp[i3]*3;
            nm5=dp[i5]*5;
            dp[i]=min(nm2,min(nm3,nm5));
            if(dp[i]==nm2) i2++;//next multiple of 2 of number at pos i2 has been included
            if(dp[i]==nm3) i3++;//next multiple of 3 of number at pos i3 has been included
            if(dp[i]==nm5) i5++;//next multiple of 5 of number at pos i5 has been included
        }
        return dp[n-1];
    }
};
