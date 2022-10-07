//https://cses.fi/problemset/task/1192
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
vector<vector<int>> grid;

void floodfill(int x, int y, int n, int m){
    grid[x][y] = '#';
    int count = 0
    for (int i = -1; i < 2; i++) {
        for (int j = -1; j < 2; j++) {
            if (i != 0 && j != 0) {
                if (grid[i + x][j + x] == '.') {
                    floodfill(x+i, y+i, n, m);
                    count++;
                }
            }
        }
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    
    return 0;
}