#include <bits/stdc++.h> 
vector<int> maximumMeetings(vector<int> &start, vector<int> &end) {
    
 vector<pair<int,pair<int,int>>> store;
 
 for(int i=0;i<start.size();i++){
    store.push_back({end[i],{i+1,start[i]}});

 }

 sort(store.begin(),store.end());

 vector<int> ans;
 int dt=-1;

 for(auto it: store){
    if(ans.size()==0){
       dt=it.first;
       ans.push_back(it.second.first);
    }
    else if(it.second.second>dt){
       dt=it.first;
       ans.push_back(it.second.first);
    }
    else
    continue;
 }
 
    return ans;
}
