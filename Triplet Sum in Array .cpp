bool find3Numbers(int A[], int n, int X)
    {
        sort(A,A+n);
    for(int i=0;i<n;i++)
    {
        int f=A[i];
        int j=i+1;
        int k=n-1;
        while(j<k)
        {
            if(f+A[j]+A[k]==X)
            return true;
            else if(f+A[j]+A[k]>X)
            k--;
            else j++;
        }
    }
    return false;
    }