  int PalinArray(int a[], int n)
    {
    	for(int i=0;i<n;i++)
    	{
    	    string str=to_string(a[i]);
    	   string rev = string(str.rbegin(),str.rend());
    	    if(str!=rev)
    	    return 0;
    	}
    	return 1;
    }