**SOLVED RAT IN A MAZE PROBLEM OF GFG JUST UN-COMMENT IT** 

```
    class Solution{
        private:
        bool isSafe(int x, int y,int n, vector<vector<int>> visited, vector<vector<int>>& m)
        {
            if((x>=0 && x<n) && (y>=0 && y<n) && visited[x][y] == 0 && m[x][y] ==1)
                return true;
            else
                return false;
        }
        void solve(vector<vector<int>>& m, int n,vector<string>& ans, 
        int x, int y, vector<vector<int>> visited, string path)
        {
            //base case
            If destination is reached then 
            if(x == n-1 && y == n-1)
            {
                ans.push_back(path);
                return;
            }
            visited[x][y] = 1;      // Particular position of x and y ko wo 1 mark kar dega 
                                    matlab x and y wale location ke liye wo jagha vist ho chuki h 
            
            //4 moves are possible 
            //down
            int newx = x+1;
            int newy = y;
            if(isSafe(newx, newy,n, visited, m))
            {
                path.push_back('D');
                solve(m,n, ans, newx, newy, visited, path);
                path.pop_back();
            }
            //up
            newx = x-1;
            newy = y;
            if(isSafe(newx, newy,n, visited, m)) 
            {
                path.push_back('U');
                solve(m,n, ans, newx, newy, visited, path);
                path.pop_back();
            }
            //left
            newx = x;
            newy = y-1;
            if(isSafe(newx, newy,n, visited, m))
            {
                path.push_back('L');
                solve(m,n, ans, newx, newy, visited, path);
                path.pop_back();
            }
            //right
            newx = x;
            newy = y+1;
            if(isSafe(newx, newy,n, visited, m))
            {
                path.push_back('R');
                solve(m,n, ans, newx, newy, visited, path);
                path.pop_back();
            }
            visited[x][y] = 0;
        }
        public:
        vector<string> findPath(vector<vector<int>> &m, int n) {
            vector<string> ans;
            if(m[0][0] == 0)
                return ans;
                
            int srcx = 0;
            int srcy = 0;
            
            vector<vector<int>> visited = m;
            
            for(int i = 0; i<n; i++)
            {
                for(int j = 0; j<n; j++)
                    visited[i][j] = 0;
            }
            string path = "";
            solve(m,n,ans,srcx,srcy,visited,path);
            sort(ans.begin(),ans.end());
            return ans;
        }
    };
```
    
