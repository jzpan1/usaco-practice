//https://cses.fi/problemset/task/1618
#include <iostream>
#define ll long long
using namespace std;

int main() {
    ll n;
    cin >> n;
    ll count = 0;
    while (n!=0) {
        n = (ll)n/5;
        count+=n;
    }
    cout << count;
}