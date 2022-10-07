//https://cses.fi/problemset/task/1070
#include <iostream>

using namespace std;

int main() {
    int n; cin >> n;
    if (n<4 && n>1){
        cout << "NO SOLUTION";
        return 0;
    }
    int count = 1;
    while (count < n) {
        cout << n-count << ' ';
        count +=2;
    }
    count = 0;
    while (count < n) {
        cout << n-count << ' ';
        count += 2;
    }
    return 0;
}