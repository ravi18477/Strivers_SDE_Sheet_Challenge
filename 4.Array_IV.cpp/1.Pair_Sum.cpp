vector<vector<int>> pairSum(vector<int> &arr, int sum){
   vector<vector<int>> ans;
   


   for(int i=0;i<arr.size();i++){
      for(int j=0;j<i;j++){
         if(arr[i]+arr[j]==sum){
            ans.push_back( {min(arr[i],arr[j]),max(arr[i],arr[j])} );
         }
      }
   }
  
  sort(ans.begin(),ans.end());
   return ans;
}
