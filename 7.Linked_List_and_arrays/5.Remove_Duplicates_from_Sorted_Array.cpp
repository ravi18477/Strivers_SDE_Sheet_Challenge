int removeDuplicates(vector<int> &arr, int n) {
	int cnt=arr.size();

	for(int i=1;i<arr.size();i++){
		if(arr[i]==arr[i-1])
		cnt--;
	}

	return cnt;
}
