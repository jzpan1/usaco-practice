//https://cses.fi/problemset/task/1072
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    for (ll k = 1; k<=n; k++) {
        cout << (k*k*(k*k-1)-8*(k-1)*(k-2))/2 << '\n';
    }
    return 0;
}