int modularExponentiation(int x, int n, int m) {
  int ans=1;

   while(n>0){
      if(n%2!=0)
	  ans=(ans*1ll*x)%m;

	  x=(x*1ll*x)%m;
	  n=n/2;
   }

   return ans;
}
