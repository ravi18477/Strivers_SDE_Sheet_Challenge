#include<bits/stdc++.h>
int maximumActivities(vector<int> &start, vector<int> &finish) {
    vector<pair<int,int>> work;

    for(int i=0;i<start.size();i++){
        work.push_back({finish[i],start[i]});
    }

    sort(work.begin(),work.end());
    
    int ft=-1,cnt=0;

    for(auto it: work){
        if(it.second>=ft){
            cnt++;
            ft=it.first;
        }
    }

    return cnt;
}
