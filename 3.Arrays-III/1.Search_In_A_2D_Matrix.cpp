bool binarySearch(vector<int> arr,int target){
    
    int s=0,e=arr.size()-1,mid=s+(e-s)/2;

    while(s<=e){
        if(arr[mid]==target)
        return true;
        else if(target>arr[mid])
        s=mid+1;
        else
        e=mid-1;

       mid=s+(e-s)/2;
    }

    return false;

}

bool searchMatrix(vector<vector<int>>& mat, int target) {
        

        for(int i=0;i<mat.size();i++){
            if(mat[i][mat[0].size()-1]>=target)
            {
                  return binarySearch(mat[i],target);

                }
            
        }

        return  false;
}
