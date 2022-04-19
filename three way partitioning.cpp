void threeWayPartition(vector<int>& arr,int a, int b)
    {  
        int n=arr.size();
     int low=0,mid=0,high=n-1;
     while(mid<=high)
     {
         if(arr[mid]<a)
         {
             swap(arr[mid],arr[low]);
             mid++;
             low++;
         }
         else if(arr[mid]>=a &&arr[mid]<=b)
         mid++;
         else{
             swap(arr[high],arr[mid]);
             high--;
         }
     }
    }