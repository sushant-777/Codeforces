#include <bits/stdc++.h>
using namespace std;

const int N = 7;  

bool isInbound(int i, int j) {
    return i >= 0 && i < N && j >= 0 && j < N;
}

void dfs(int x, int y, int step, const string& path, vector<vector<int>>& visited, int& totalPaths) {
    if (step == N * N - 1 || (x == N - 1 && y == 0)) {
        if (step == N * N - 1 && x == N - 1 && y == 0) {
            totalPaths++;
        }
        return;
    }

    // Optimization: avoid boxed-in dead ends
    if ((!isInbound(x - 1, y) || visited[x - 1][y]) &&
        (!isInbound(x + 1, y) || visited[x + 1][y])) {
        if (isInbound(x, y - 1) && !visited[x][y - 1] &&
            isInbound(x, y + 1) && !visited[x][y + 1]) {
            return;
        }
    }

    if ((!isInbound(x, y - 1) || visited[x][y - 1]) &&
        (!isInbound(x, y + 1) || visited[x][y + 1])) {
        if (isInbound(x - 1, y) && !visited[x - 1][y] &&
            isInbound(x + 1, y) && !visited[x + 1][y]) {
            return;
        }
    }

    visited[x][y] = 1;

    if (path[step] == '?' || path[step] == 'L') {
        if (isInbound(x, y - 1) && !visited[x][y - 1]) {
            dfs(x, y - 1, step + 1, path, visited, totalPaths);
        }
    }
    if (path[step] == '?' || path[step] == 'R') {
        if (isInbound(x, y + 1) && !visited[x][y + 1]) {
            dfs(x, y + 1, step + 1, path, visited, totalPaths);
        }
    }
    if (path[step] == '?' || path[step] == 'U') {
        if (isInbound(x - 1, y) && !visited[x - 1][y]) {
            dfs(x - 1, y, step + 1, path, visited, totalPaths);
        }
    }
    if (path[step] == '?' || path[step] == 'D') {
        if (isInbound(x + 1, y) && !visited[x + 1][y]) {
            dfs(x + 1, y, step + 1, path, visited, totalPaths);
        }
    }

    visited[x][y] = 0;
}

int main() {

    string path;
    cin >> path;
    vector<vector<int>> visited(N, vector<int>(N, 0));
    int totalPaths = 0;
    dfs(0, 0, 0, path, visited, totalPaths);
    cout <<  totalPaths;
    return 0; 
}

