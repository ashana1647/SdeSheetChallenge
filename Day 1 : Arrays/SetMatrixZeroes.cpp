#include <bits/stdc++.h> 
void setZeros(vector<vector<int>> &matrix)
{
	// Write your code here.
    //for 1st column
    
    int colzero=1;
    for(int i=0;i<matrix.size();i++)
    {
        if(matrix[i][0]==0)
        {
            colzero=0;
            break;
        }
    }
    
    // for all rows
    for(int i=0;i<matrix.size();i++)
    {
        for(int j=0;j<matrix[i].size();j++)
        {
            if(matrix[i][j]==0)
            {
                matrix[i][0]=0;
                break;
            }
        }
    }
    
    // for columns 1 to n
    for(int i=1;i<matrix[0].size();i++)
    {
        for(int j=0;j<matrix.size();j++)
        {
            if(matrix[j][i]==0)
            {
                matrix[0][i]=0;
                break;
            }
        }
    }
    
    //making the rows zero
    //making the columns 1 to n zero
    for(int i=1;i<matrix[0].size();i++)
    {
        if(matrix[0][i]==0){
            for(int j=0;j<matrix.size();j++)
            {
                matrix[j][i]=0;
            }
        }
    }
    
    //making the rows zero
    for(int i=0;i<matrix.size();i++){
        if(matrix[i][0]==0){
            for(int j=0;j<matrix[0].size();j++){
                matrix[i][j]=0;
            }
        }
    }
    
    
    //making column 1 zero
    if(colzero==0){
        for(int i=0;i<matrix.size();i++){
            matrix[i][0]=0;
        }
    }
}
