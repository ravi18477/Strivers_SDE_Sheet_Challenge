int longestSubSeg(vector<int> &arr , int n, int k){
    vector<int> zerosIndex;
    
    int j=0;
    int s=0;
    int maxlen=0;

    for(int i=0;i<arr.size();i++){
     
     if(arr[i]==0){
         zerosIndex.push_back(i);
         if (k == 0) {
             s=++zerosIndex[j++];
             k++;
             
         }
         
         
         k--;
         
     }

     maxlen=max(maxlen,i-s+1);
       
    }

    return maxlen;
}
