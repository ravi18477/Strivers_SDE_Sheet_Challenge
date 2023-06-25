int uniqueSubstrings(string input)

{
if(input.size()==0)
return 0;
   map<char,int> mp;
   int s=-1;
   int maxlen=-1;

   for(int i=0;i<input.size();i++){

       if(mp[input[i]]-1>=s){
           s=mp[input[i]]-1;
       }
       mp[input[i]]=i+1;

       maxlen=max(maxlen,i-s);

   } 

   return maxlen;
}
