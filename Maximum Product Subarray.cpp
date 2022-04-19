class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(vector<int> arr, int n) {
	    long long product1=1,product2=1;
	    long long ans1=INT_MIN,ans2=INT_MIN;
	    for(int i=0;i<n;i++)
	    {
	        product1*=arr[i];
	        ans1=max(ans1,product1);
	        if(product1==0)
	        {
	            product1=1;
	        }
	    }
	      for(int i=n-1;i>=0;i--)
	    {
	        product2*=arr[i];
	        ans2=max(ans2,product2);
	        if(product2==0)
	        {
	            product2=1;
	        }
	    }
	    return max(ans1,ans2);
	    // code here
	}