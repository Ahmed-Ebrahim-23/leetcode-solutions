class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        int n = grid.size(),m=grid[0].size();
        int ans=0;
        vector<int> row(n,0),col(m,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1)
                    ans++,row[i]++,col[j]++;
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(row[i]==1 && col[j]==1 && grid[i][j]==1)
                    ans--;
            }
        }
        return ans;
    }
};