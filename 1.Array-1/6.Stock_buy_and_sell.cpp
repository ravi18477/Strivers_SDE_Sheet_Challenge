int maximumProfit(vector<int> &prices){
    int n=prices.size();
    int maxi=prices[n-1];
    int maxprofit=0;
    
    for(int i=n-1;i>=0;i--){
        maxi=max(maxi,prices[i]);
        int profit=maxi-prices[i];
        maxprofit=max(maxprofit,profit);
    }

    return maxprofit;
}
