 int maxProfit(int K, int N, int A[]) {
       if(N==0||N==1)
       return 0;
       if(K>N)
       K=N;
       vector<int> dp(N);
       for(int b=1;b<=K;b++)
       {
           int prev_small_number=A[0];
           vector<int> new_dp(N);
           for(int i=1;i<N;i++)
           {
               new_dp[i]=max(new_dp[i-1],A[i]-prev_small_number);
               prev_small_number=min(prev_small_number,A[i]-dp[i]);
           }
           dp=new_dp;
       }
       return dp[N-1];
    }