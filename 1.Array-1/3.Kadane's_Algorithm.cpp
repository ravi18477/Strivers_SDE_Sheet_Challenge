long long maxSubarraySum(int arr[], int n)
{if(n==0)
 return 0;
   
  long long sum=arr[0];
  long long maxi=INT_MIN;

  for(int i=1;i<n;i++){
    
      sum+=arr[i];
      if(sum<0)
      sum=0;
  if(maxi<=sum)
  maxi=sum;
    
      
  }

  return maxi;

}
