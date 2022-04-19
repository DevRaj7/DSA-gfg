int findLongestConseqSubseq(int arr[], int N)
    {
      unordered_set<int> m;
      for(int i=0;i<N;i++)
      {
          m.insert(arr[i]);
      }
      int num=*min_element(arr,arr+N);
      int ans=-1;
      int count=0;
     
      while(m.size()>0)
      {
          if(m.find(num)!=m.end())
          {
            
              count++;
              m.erase(num);
          }
          else{
              
              count=0;
          }
            num++;
          ans=max(ans,count);
      }
      return ans;
    }