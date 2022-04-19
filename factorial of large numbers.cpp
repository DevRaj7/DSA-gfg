class Solution {
public:
void multiply(vector<int> &res,int &size,int c)
{
    int carry=0;
    for(int i=0;i<size;i++)
    {
        int prod=res[i]*c+carry;
        res[i]=prod%10;
        carry=prod/10;
    }
    while(carry)
    {
        res.push_back(carry%10);
        carry=carry/10;
        size++;
    }
}
    vector<int> factorial(int N){
     
       vector<int> res;
       res.push_back(1);
       int size=1;
       for(int i=2;i<=N;i++)
       {
           multiply(res,size,i);
       }
       reverse(res.begin(),res.end());
       return res;
    }
};