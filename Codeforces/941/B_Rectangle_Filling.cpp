#include <iostream>
#include <vector>
#include <string>
#include <queue>

using namespace std;

int n, m;
vector<string> grid;
vector<vector<bool>> visited;

// Direction vectors for moving in 4-connected grid
vector<int> dx = {-1, 1, 0, 0};
vector<int> dy = {0, 0, -1, 1};

// Check if given coordinates are inside the grid
bool isValid(int x, int y) {
    return x >= 0 && x < n && y >= 0 && y < m;
}

// DFS to mark all connected components of the same color
void dfs(int x, int y, char color) {
    visited[x][y] = true;
    for (int dir = 0; dir < 4; ++dir) {
        int nx = x + dx[dir];
        int ny = y + dy[dir];
        if (isValid(nx, ny) && !visited[nx][ny] && grid[nx][ny] == color) {
            dfs(nx, ny, color);
        }
    }
}

// Function to count connected components of a given color
int countConnectedComponents(char color) {
    visited.assign(n, vector<bool>(m, false));
    int count = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (!visited[i][j] && grid[i][j] == color) {
                dfs(i, j, color);
                ++count;
            }
        }
    }
    return count;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        cin >> n >> m;
        grid.resize(n);
        for (int i = 0; i < n; ++i) {
            cin >> grid[i];
        }
        
        // Count connected components of 'W' and 'B'
        int numWhite = countConnectedComponents('W');
        int numBlack = countConnectedComponents('B');
        
        // If there's exactly one connected component of 'W' or 'B', output "YES"
        if (numWhite == 1 || numBlack == 1) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}
