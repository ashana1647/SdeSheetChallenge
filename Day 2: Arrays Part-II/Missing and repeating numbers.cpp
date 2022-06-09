pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here 
    pair<int,int>ans;
    
    int xr=arr[0],x=0,y=0;
    for(int i=1;i<arr.size();i++)
    {
        xr=xr^arr[i];
    }
    
    for(int i=1;i<=arr.size();i++)
    {
        xr=xr^i;
    }
    
    //finding the rightmost bit in xr
    int rm_bit=xr & ~(xr-1);
    
    for(int i=0;i<arr.size();i++)
    {
        if(rm_bit & arr[i]){
            x=x^arr[i];
        }
        else
            y=y^arr[i];
    }
    
    for(int i=0;i<=arr.size();i++)
    {
        if(rm_bit & i){
            x=x^i;
        }
        else
            y=y^i;
    }
    int flag=0;
    for(int i=0;i<arr.size();i++)
    {
        if(x==arr[i]){
            flag++;
        }
    }
//     cout<<x;
    
    if(flag==0){
        ans.first=x;
        ans.second=y;
    }else{
        ans.first=y;
        ans.second=x;
    }
    return ans;
	
}
