//https://cses.fi/problemset/task/1094
#include <iostream>
using namespace std;
int main() {
    long long max = 1;
    int len;
    long long temp;
    long long ans=0;
    cin >> len;
    for (int i = 0; i<len; i++) {
        cin >> temp;
        if (temp<=max) {
            ans += max-temp;
        }
        else {
            max = temp;
        }
    }
    cout << ans;
    return 0;
}