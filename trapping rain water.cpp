long long trappingWater(int arr[], int n){
       vector<int> left(n);
       vector<int> right(n);
       left[0]=arr[0];
       for(int i=1;i<n;i++)
       {
           left[i]=max(left[i-1],arr[i]);
       }
       right[n-1]=arr[n-1];
        for(int i=n-2;i>=0;i--)
       {
           right[i]=max(right[i+1],arr[i]);
       }
       
       long long sum=0;
       for(int i=0;i<n;i++)
       {
           int s=min(left[i],right[i]);
           int x=s-arr[i];
           if(x>0)
           sum+=x;
       }
       return sum;
    }