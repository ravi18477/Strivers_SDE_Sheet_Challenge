vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {

   sort(arr.begin(),arr.end());
   set<vector<int>> ans;
   for(int i=0;i<n;i++){
      int s=i+1,e=arr.size()-1;

	  while(s<e){
		 int  sum=arr[i]+arr[s]+arr[e];
		  if(sum==K){
			  vector<int> out;
             out.push_back(arr[i]);
			  out.push_back(arr[s]);
			   out.push_back(arr[e]);
			   ans.insert(out);
			   e--;
			   s++;
			   
		  }
		  else if(sum>K){
			  e--;
		  }
		  else
		  s++;
	  }

   }
   vector<vector<int>> sol;
   for(auto it:ans)
     sol.push_back(it);

   return sol;	

}
