//https://cses.fi/problemset/task/1617
#include <iostream>
#include <cmath>
#define ll long long

using namespace std;

int main() {
    int n;
    cin >> n;
    ll ans = 1;
    ll ten = (ll)pow(10,9) + 7;
    for (int i=0; i<n; i++) {
        ans = (ans*2) % ten;
    }
    cout << ans;
    return 0;
}