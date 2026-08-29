class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {

        int n = isConnected.size();
        int count = 0;

        vector<vector<int>> adjLs(n);

        // Create adjacency list
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {

                if(isConnected[i][j] == 1 && i != j) {
                    adjLs[i].push_back(j);
                }
            }
        }

        vector<int> vis(n, 0);

        for(int i = 0; i < n; i++) {

            if(!vis[i]) {

                // Found a new province
                count++;

                queue<int> q;
                q.push(i);
                vis[i] = 1;

                while(!q.empty()) {

                    int node = q.front();
                    q.pop();

                    for(auto it : adjLs[node]) {

                        if(!vis[it]) {
                            vis[it] = 1;
                            q.push(it);
                        }
                    }
                }
            }
        }

        return count;
    }
};