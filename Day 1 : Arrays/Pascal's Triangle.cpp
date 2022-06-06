vector<vector<long long int>> printPascal(int n) 
{
  // Write your code here.
    vector<vector<long long int>> ans;
    vector<long long int>t;
        if(n==1){
        t.push_back(1);
        ans.push_back(t);
        }
        
        else
        {
            t.push_back(1);
            ans.push_back(t);
            
            t.push_back(1);
            ans.push_back(t);
            vector<long long int> prev=t; 
            for(int i=3;i<=n;i++)
            {
                vector<long long int>temp;
                temp.push_back(1);
                int x=0,y=i-2;
                while(y--)
                {
                    temp.push_back(prev[x]+prev[x+1]);
                    x++;
                }
                temp.push_back(1);
                prev=temp;
                ans.push_back(temp);
            }
        }
        return ans;
}
