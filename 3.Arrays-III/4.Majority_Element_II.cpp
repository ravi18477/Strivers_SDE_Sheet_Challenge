vector<int> majorityElementII(vector<int> &arr)
{
    int ele1=-1,ele2=-1,cnt1=0,cnt2=0,n=arr.size();

    for(int i=0;i<n;i++){
        if(cnt1==0 && arr[i]!=ele2){
            cnt1++;
            ele1=arr[i];
        }
        else if(cnt2==0 && arr[i]!=ele1){
            cnt2++;
            ele2=arr[i];
        }
        else if(arr[i]==ele1)
         cnt1++;
        else if(arr[i]==ele2)
        cnt2++;
        else
       { cnt1--;cnt2--;}
    }
    
    cnt1=0;
    cnt2=0;

    for(int i=0;i<n;i++){
        if(arr[i]==ele1)
        cnt1++;

        if(arr[i]==ele2)
        cnt2++;

    }

    vector<int> ans;

    if(cnt1>n/3)
    ans.push_back(ele1);

    
    if(cnt2>n/3)
    ans.push_back(ele2);

    return ans;

}
