int subarraysXor(vector<int> &arr, int x)
{
     map<int,int> mp;

     mp[0]=1;

     int cnt=0;

     int xors=0;

     
     for(int i=0;i<arr.size();i++){
         xors=xors^arr[i];
         if(mp[xors^x]>0){
            cnt+=mp[xors^x];
         }
        //  else if(arr[i]==x)
        //  cnt+=mp[xors];
         
         mp[xors]++;
         
     }

     return cnt;

}
