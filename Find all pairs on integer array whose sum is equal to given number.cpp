class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
       map<int,int> m;
       int count=0;
      for(int i=0;i<n;i++)
      {
          int target=arr[i];
       
          if(m.find(k-target)!=m.end())
          {
              count+=m[k-target];
          }
          m[arr[i]]++;
      }
      return count;
    }
};