vector<int> nextPermutation(vector<int> &permutation, int n)
{
    //  Write your code here.
    int l,k;
    for( k=n-2;k>=0;k--)
    {
        if(permutation[k]<permutation[k+1])
            break;
    }
    if(k<0)
        sort(permutation.begin(),permutation.end());
    else{
        for( l=n-1;l>=0;l-- )
        {
            if(permutation[l]>permutation[k])
            {
                swap(permutation[l],permutation[k]);
                break;
            }
        }
        sort(permutation.begin()+k+1,permutation.end());
    }
    return permutation;
}
