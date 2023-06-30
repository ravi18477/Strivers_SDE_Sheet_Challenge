long getTrappedWater(long *arr, long n){
    
    long next[n];
    long pre[n];
    
    pre[0]=-1;
    long max=arr[0];

    for(long i=1;i<n;i++){
       if(arr[i]>=max){
           max=arr[i];
           pre[i]=-1;
       }
       else
       pre[i]=max;
    }
    
   next[n-1]=-1;
   max=arr[n-1];

    for(long i=n-2;i>=0;i--){
       if(arr[i]>=max){
           max=arr[i];
           next[i]=-1;
       }
       else
       next[i]=max;
    }
    
    long ans=0;

    for(long i=0;i<n;i++){
        if(pre[i]==-1 || next[i]==-1)
        continue;
        else{
            ans+=min(pre[i],next[i])-arr[i];
        }
    }

    return ans;


    
    

}
