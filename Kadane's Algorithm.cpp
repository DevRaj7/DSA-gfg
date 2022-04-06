long long maxSubarraySum(int arr[], int n){
        
         long long maxsum=INT_MIN;
        long long sum=0;
        for(long long i=0;i<n;i++)
        {
            sum+=arr[i];
            maxsum=max(maxsum,sum);
            if(sum<0)
            {
                sum=0;
            }
        }
        return maxsum;
        
    }
        
    }