#include <bits/stdc++.h> 

bool comp(vector <int> a,vector<int> b)
{
     return a[1]>b[1];
     }


int jobScheduling(vector<vector<int>> &jobs)
{   int maxi=0;
    for(int i=0;i<jobs.size();i++){
      maxi=max(maxi,jobs[i][0]);
      
    }

    sort(jobs.begin(),jobs.end(),comp);


    int arr[maxi+1];

    for(int i=0;i<=maxi;i++){
        arr[i]=-1;
    }
    
    for(int i=0;i<jobs.size();i++){
        int a=jobs[i][0],profit=jobs[i][1];
        while(a>0){
            if(arr[a]==-1){
                arr[a]=profit;
        
                break;
            }
            else if(arr[a]<profit){
                arr[a]=profit;
                break;

            }

            a--;
        }

    }

    int maxprofit=0;

    for(int i=1;i<=maxi;i++){
        if(arr[i]!=-1)
        maxprofit+=arr[i];
    }


return maxprofit;



}
