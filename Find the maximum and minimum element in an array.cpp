pair<long long, long long> getMinMax(long long a[], int n) {
    int maxx=INT_MIN,minn=INT_MAX;
    for(long long i=0;i<n;i++)
    {
        if(a[i]>maxx)
        maxx=a[i];
    }
    for(long long i=0;i<n;i++)
    {
        if(a[i]<minn)
        minn=a[i];
    }
    
    return {minn,maxx};
}