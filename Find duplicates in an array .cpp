class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        // map<int,int> m;
        vector<int> v(n,0);
        for(int i=0;i<n;i++)
        {
           v[arr[i]]+=1;
        }
        vector<int> ans;
        // for(auto itr=m.begin();itr!=m.end();itr++)
        // {
        //     if(itr->second>1)
        //     v.push_back(itr->first);
        // }
        for(int i=0;i<n;i++)
        {
            if(v[i]>1)
            ans.push_back(i);
        }
        if(ans.size()==0)
        return {-1}; 
        else
        return ans;
    }
};