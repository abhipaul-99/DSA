//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends


class Solution
{   
    public:
    //Function to modify the matrix such that if a matrix cell matrix[i][j]
    //is 1 then all the cells in its ith row and jth column will become 1.
    void booleanMatrix(vector<vector<int> > &matrix)
    {
        // code here 
        vector<vector<int>> v;
        queue<pair<int,int>> q;
        unordered_map<int,bool> mp1;
        unordered_map<int,bool> mp2;
        int n = matrix.size();
        int m = matrix[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==1){
                    q.push({i,j});
                }
            }
        }
        
        while(q.size()>0){
            int row = q.front().first;
            int col = q.front().second;
            q.pop();
            if(mp1[row]!= true){
                for(int j=0;j<m;j++){
                    matrix[row][j]=1;
                }
            }
            
            if(mp2[col]!= true){
                for(int i=0;i<n;i++){
                    matrix[i][col]=1;
                }
            }
            mp1[row] = true;
            mp2[col] = true;
        }
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    while(t--) 
    {
        int row, col;
        cin>> row>> col;
        vector<vector<int> > matrix(row); 
        for(int i=0; i<row; i++)
        {
            matrix[i].assign(col, 0);
            for( int j=0; j<col; j++)
            {
                cin>>matrix[i][j];
            }
        }
        
        Solution ob;
        ob.booleanMatrix(matrix);


        for (int i = 0; i < row; ++i)
        {
            for (int j = 0; j < col; ++j)
            {
                cout<<matrix[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}



// } Driver Code Ends