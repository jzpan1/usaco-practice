//http://www.usaco.org/index.php?page=viewproblem&cpid=1145
#include <iostream>
#include <algorithm>
#include <vector>
#define ll long long
using namespace std;

vector<vector<int>> bales(0);
int find_path(int x, int y, int k, bool d, int n){
    bool rvalid = true; bool dvalid = true;
    int count = 0;

    if (x==n-1 && y==n-1) {
        return 1;
    }

    if (k==0){
        if (d) dvalid = false;
        else rvalid = false;
    }

    if (x+1>n-1) rvalid = false;
    if (y+1>n-1) dvalid = false;

    for (vector<int> &bale : bales) {
        if (bale[0] == x+1 && bale[1] == y) rvalid=false;
        if (bale[0] == x && bale[1] == y+1) dvalid=false;
    }

    if (x==0 && y==0){
        if (rvalid) count += find_path(x+1, y, k, true, n);
        if (dvalid) count += find_path(x, y+1, k, false, n);
    } else {
        if (d) {
            if (rvalid) count += find_path(x+1, y, k, true, n);
            if (dvalid) count += find_path(x, y+1, k-1, false, n);
        } else {
            if (rvalid) count += find_path(x+1, y, k-1, true, n);
            if (dvalid) count += find_path(x, y+1, k, false, n);
        }
    }
    return count;
}

int main(){
    int t, n, k;
    char inc;
    cin >> t;
    for (int q = 0; q<t; q++) {
        bales.clear();
        cin >> n >> k;
        for (int x = 0; x<n; x++) {
            for (int y = 0; y<n; y++) {
                cin >> inc;
                if (inc == 'H') {
                    bales.push_back(vector<int> {x, y});
                }
            }
        }
        cout << find_path(0, 0, k, true, n) << endl;
    }
    return 0;
}