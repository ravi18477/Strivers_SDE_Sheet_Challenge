int LongestSubsetWithZeroSum(vector < int > arr) {

  map<long long,int> mp;
  int maxlen=0;
  

  long long sum=0;

  for(int i=0;i<arr.size();i++){

    sum+=arr[i];

    if(mp[sum]){
      maxlen=max(maxlen,i-mp[sum]+1);

    }
    else if(sum==0)
     maxlen=max(maxlen,i+1);

    else
    mp[sum]=i+1;

    
  }

  return maxlen;

}
