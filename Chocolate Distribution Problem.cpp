 long long findMinDiff(vector<long long> a, long long n, long long m){
    sort(a.begin(),a.end());
    long long sum=0;
    long long ans=INT_MAX;
    sum=a[m-1]-a[0];
    ans=sum;
    int j=1;
    for(int i=m;i<n;i++)
    {
        sum=a[i]-a[j];
        j++;
   ans=min(ans,sum);
    }
    return ans;
    }   