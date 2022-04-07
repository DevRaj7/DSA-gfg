class Solution{
public:
    //Function to find the days of buying and selling stock for max profit.
    vector<vector<int> > stockBuySell(vector<int> arr, int n){
     
    
       
       vector<vector<int>> ans;
       for(int i=0;i<n-1;i++)
       {  vector<int> v;
          if(arr[i]<arr[i+1])
          {
              v.push_back(i);
            v.push_back(i+1);
            ans.push_back(v);
            
            
          }
          
       }
    
       return ans;
       
    }
};
