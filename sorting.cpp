#include<iostream>
using namespace std;
void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
void ss(int a[],int n)
{
    
    for(int i=0;i<n;i++)
    { 
    for(int j=i+1;j<n;j++)
    {
        if(a[j]<a[i])
        swap(&a[j],&a[i]);
    }}
}
void bs(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            swap(&a[j],&a[j+1]);
        
        }
    }
}

void is(int a[],int n)
{
    for(int i=1;i<n;i++)
    {   int current=a[i];
        int j=i-1;
        while(a[j]>current &&j>=0)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=current;
    }
}

void print(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
int main()
{
    int a[]={7,9,6,3,2,4,5,1,8};
    int n=sizeof(a)/sizeof(a[0]);
    is(a,n);
    print(a,n);
    return 0;
}