int maximumProfit(vector<int> &prices){
    // Write your code here.
    int profit=0,mn=INT_MAX;
    for(int i=0;i<prices.size();i++)
    {
        if(mn>prices[i])
            mn=prices[i];
        else{
            profit=max(prices[i]-mn,profit);
        }
    }
    return profit;
}
