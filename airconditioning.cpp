//http://www.usaco.org/index.php?page=viewproblem&cpid=1144

#include <iostream>
#include <algorithm>
#include <vector>
#define ll long long
using namespace std;
vector<int> x;
/*
def fill_forward(i, a, n) {
    if xi = -:
        for (i+1; j<n; j++) {
            if xi = -:

            else break;
        }
}
*/
int main(){
    int n, inp;
    cin >> n;
    ll count = 0;
    int a;
    int maxi = 0;
    x.resize(n);
    for (int i = 0; i<n; i++) {
        cin >> inp;
        x[i] = inp;
    }
    for (int i = 0; i<n; i++) {
        cin >> inp;
        x[i] -= inp;
    }
    for (int i = 0; i<n; i++) {
        a = abs(x[i]);
        count += a;
        if (x[i]<0) {
            for (int j=i+1; j<n; j++) {
                if (x[j]<0) {
                    a = min(a, abs(x[j]));
                    x[j] += a;
                }
                else break;
            }
        }
        if (x[i]>0) {
            for (int j=i+1; j<n; j++) {
                if (x[j]>0) {
                    a = min(a, abs(x[j]));
                    x[j] -= a;
                }
                else break;
            }
        }
    }
    cout << count;
    return 0;
}
