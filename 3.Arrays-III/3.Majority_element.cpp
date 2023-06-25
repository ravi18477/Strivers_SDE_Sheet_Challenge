int findMajorityElement(int arr[], int n) {
     int ele=INT_MIN,cnt=0;

for(int i=0;i<n;i++){
	if(cnt==0){
		ele=arr[i];
		cnt++;
	}
	else if(arr[i]==ele)
	{
		cnt++;
	}
	else
	cnt--;
}

int t=0;
for(int i=0;i<n;i++){
if(arr[i]==ele)
t++;
}

if(t>n/2)
return ele;
else 
return -1;
