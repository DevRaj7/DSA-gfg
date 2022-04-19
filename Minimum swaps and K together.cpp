int minSwap(int arr[], int n, int k) {
        // Complet the function
           int good=0,bad=0;
       for(int i=0;i<n;i++){
           if(arr[i]<=k)
           good++;
       }
       for(int i=0;i<good;i++){
           if(arr[i]>k)
           bad++;
       }
       int ans=bad;
       for(int i=0,j=good;j<n;i++,j++){
           if(arr[i]>k) bad--;
           if(arr[j]>k) bad++;
       
       ans=min(ans,bad);}
       return ans;
       
   }