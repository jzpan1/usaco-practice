//https://codeforces.com/gym/102951/problem/A
#include <iostream>
#include <algorithm>
#include <vector>
#define ll long long
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> x, y;
    int input;
    for (int i = 0; i<N; i++){
        cin >> input;
        x.push_back(input);
    }
    for (int i = 0; i<N; i++){
        cin >> input;
        y.push_back(input);
    }
    ll max = 0;
    ll xdist, ydist, total;
    for (int i = 0; i<N-1; i++) {
        for (int j = i+1; j<N; j++){
            xdist = x[i]-x[j];
            ydist = y[i]-y[j];
            total = xdist*xdist + ydist*ydist;
            if (total>max){
                max = total;
            }
        }
    }
    cout << max;
    return 0;
}