//https://cses.fi/problemset/task/1083/
#include <iostream>
#include <array>
using namespace std;
int main() {
    long long len;
    cin >> len;
    long long num = len*(len+1)/2;
    long long temp;
    for (long long i = 0; i<len-1; i++) {
        cin >> temp;
        num -= temp;
    }
    cout << num;
}