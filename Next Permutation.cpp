class Solution{
public:
    vector<int> nextPermutation(int n, vector<int> arr){
    
      int i,j;
        i = n-2;
        
        
        while(arr[i] >= arr[i+1] && i>=0)
        {
            i--;
        }
       
        if(i==-1)
        {
            reverse(arr.begin(),arr.end());
            return arr;
        }
        j = n-1;
        while(arr[j]<arr[i])
        {
            j--;
        }
        swap(arr[i],arr[j]);
        
        reverse(arr.begin() + i + 1,arr.end());
        return arr;
    }
    
};