//http://www.usaco.org/index.php?page=viewproblem&cpid=1194
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#define ll long long
using namespace std;

int main(){
    int N, n;
    int count = 0;
    bool in;
    string line;
    vector<int> prefs (N, 0);

    vector<vector<int>> exchange(N, vector<int>(0));
    cin >> N;
    for (int i = 0; i<N; i++) {
        for (int j=0; j<N; j++) {
            cin >> n;
            if (n!=i+1){
                prefs[n]++;
                exchange[j].push_back(n);
            }
            else {
                if (j!=N-1) getline( cin, line);
                break;
            }
        }
    }
    for (int i = 0; i<N; i++) {
        for (int j = (int)exchange[i].size()-1; j>-1; j--) {
            n=exchange[i][j];
            if (exchange[n].size()>1) {
                in = true;
                break;
            }
            else {
                exchange[i].erase(exchange[i].begin()+j);
            }
        }
        cout << n << endl;
    }
    return 0;
};

/*
for cow i:
    for preference:
        if preference is available: 
*/