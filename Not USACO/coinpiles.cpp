//https://cses.fi/problemset/task/1754

#include <iostream>
#define ll long long

using namespace std;

int main() {
    int t;
    ll a, b;
    cin >> t;
    for (t>0; t--;) {
        cin >> a >> b;
        if ((a+b)%3==0 && (a<=2*b && b<=2*a)){
            cout << "YES"<<endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}