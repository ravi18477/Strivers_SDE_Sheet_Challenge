#include<bits/stdc++.h>
int calculateMinPatforms(int at[], int dt[], int n) {
    
 
   sort(at,at+n);
   sort(dt,dt+n);

   int plat=0,departed=0;

   for(int i=0;i<n;i++){
       if(at[i]>dt[departed])
        departed++;
        else
        plat++;
   }


    

    return  plat;

}
