#include <bits/stdc++.h> 
double maximumValue (vector<pair<int, int>>& items, int n, int w)
{
    vector<pair<double,pair<int ,int>>> mp;

    for(int i=0;i<n;i++){
        mp.push_back({(items[i].second*1.0)/items[i].first,{items[i]}});
    }

    sort(mp.begin(),mp.end());

    
    int i=n-1;;
    double profit=0;
    while(w-mp[i].second.first>=0 && i>=0){
    
    profit+=mp[i].second.second;
    w-=mp[i].second.first;

    
i--;
    }

    if(w!=0 && i>=0){
        profit+=(w*mp[i].second.second*1.0)/mp[i].second.first;
    }

    return profit;

}
