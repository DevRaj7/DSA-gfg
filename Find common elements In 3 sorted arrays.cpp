class Solution
{
    public:    
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
           set<int> s1,s2; 
            for(int i=0;i<n1;i++)
            {
                s1.insert(A[i]);
            }
               for(int i=0;i<n2;i++)
            {
               s2.insert(B[i]);
            }
            
             vector<int> v;
              for(int i=0;i<n3;i++)
            {
               if(s1.find(C[i])!=s1.end()&&s2.find(C[i])!=s2.end())
              { v.push_back(C[i]);
                  s1.erase(C[i]);
                  s2.erase(C[i]);
              }
            }
           

            return v;
        }

};