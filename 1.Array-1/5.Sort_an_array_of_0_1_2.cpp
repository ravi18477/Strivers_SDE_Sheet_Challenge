void sort012(int *arr, int n)
{
   int s=-1,e=n,i=0;

   while(i<e){
      if(arr[i]==0){
         s++;
         swap(arr[i],arr[s]);
         i++;
      }
      else if(arr[i]==2){
         e--;
         swap(arr[i],arr[e]);
      }
      else
      {
         i++;
      }
   }
