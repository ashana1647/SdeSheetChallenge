bool findTargetInMatrix(vector < vector < int >> & mat, int n, int m, int target) {
        int i=0;
        
        if(target>mat[n-1][m-1])
            return false;
        
        for( i=0;i<n;i++){
            if(target<=mat[i][m-1]){
                break;
            }
        }
        
        for(int j=0;j<m;j++)
        {
            if(mat[i][j]==target)
                return true;
        }
        return false;
    // Write your code here.
}
