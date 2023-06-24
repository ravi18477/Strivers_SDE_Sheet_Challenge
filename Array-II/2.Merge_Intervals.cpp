vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{   int n = intervals.size();
    vector<vector<int>> ans;

    sort(intervals.begin(),intervals.end());
   vector<int> out;
   out.push_back(intervals[0][0]);
   out.push_back(intervals[0][1]);

   for(int i=1;i<n;i++){
       if(out[1]>=intervals[i][0])
       {
           out[1]=max(out[1],intervals[i][1]);
       }
       else{
           ans.push_back(out);
           out[0]=intervals[i][0];
            out[1]=intervals[i][1];
       }

   }

   ans.push_back(out);

   return ans;

}
