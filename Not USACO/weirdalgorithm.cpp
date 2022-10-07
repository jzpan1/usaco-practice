/*
https://cses.fi/problemset/task/1068/
*/
#include <iostream>
#include <vector>

using namespace std;

int main() {
    long long num;
    cin >> num;
    vector<long long> out;
    out.push_back(num);
    while (num!= 1) {
        if (num%2 == 0) {
            num/=2;
        }
        else {
            num  = num*3 + 1;
        }
        out.push_back(num);
    }

    for (int i=0; i < int(out.size()); i++) {
        cout << out[i] << " ";
    }
    return 0;
}