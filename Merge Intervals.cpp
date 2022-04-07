class Solution {
public:
    vector<vector<int>> overlappedInterval(vector<vector<int>>& intervals) {
         
         set<vector<int>> s;
         for(auto v:intervals)
         s.insert(v);
        vector<vector<int>> v(s.begin(),s.end());
        // cout<<"{";
        // for(vector<int> temp: v)
        // {
        //     cout<<"{"<<temp[0]<<","<<temp[1]<<"}, ";
        // }
        for(int i=0;i<v.size()-1;)
        {
            if(v[i][1]>=v[i+1][0])
            {
                int greater=max(v[i][1],v[i+1][1]);
                v[i][1]=greater;
                v.erase(v.begin()+i+1);
            }
            else i++;
        }
        return v;
    }
};