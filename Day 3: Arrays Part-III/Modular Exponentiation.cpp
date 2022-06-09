int modularExponentiation(int x, int n, int m) {
	// Write your code here.
    long long int nn=n,ans=1,xx=x;
    while(nn){
        if(nn%2==1){
            ans=(ans*xx)%m;
            nn--;
        }
        else{
            xx=(xx*xx)%m;
            nn=nn/2;
        }
    }
//     cout<<ans<<endl;
    
    return ans%m;
}
