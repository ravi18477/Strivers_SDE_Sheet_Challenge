int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    if(n==1)
    return 1;

    sort(arr.begin(),arr.end());

    int maxlen=1;
    int cnt=1;

    for(int i=1;i<n;i++){
     if(arr[i]==arr[i-1])
     continue;
     else if(arr[i]==arr[i-1]+1){
         cnt++;
         maxlen=max(cnt,maxlen);
     }
     else
     cnt=1;

     maxlen=max(cnt,maxlen);
        

    }

    return maxlen;
}
