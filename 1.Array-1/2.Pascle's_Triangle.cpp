vector<vector<long long int>> printPascal(int n) 
{ 

  vector<vector<long long int>> ans;



  for(int i=0;i<n;i++ ){
    vector<long long int> out;
    out.push_back(1);
    for(int j=1;j<i;j++){
      out.push_back(ans[i-1][j]+ans[i-1][j-1]);
    }
      if(i!=0)
     out.push_back(1);
     ans.push_back(out);
  }


  return ans;
}
