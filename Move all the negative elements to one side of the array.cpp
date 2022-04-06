  void segregateElements(int arr[],int n)
    {  vector<int> v;
        for(int i=0;i<n;i++)
        {
            if(arr[i]<0)
        v.push_back(arr[i]);
            
        }
        int k=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]>=0)
            swap(arr[i],arr[k++]);
        }
         int i=0;
        for(int j=k;k<n;k++)
        {
            arr[k]=v[i++];
        }
    }