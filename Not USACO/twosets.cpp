//https://cses.fi/problemset/task/1092
#include <iostream>
#include <vector>
using namespace std;
int main() {
    long long n;
    cin >> n;
    int i = n;
    long long sum = n*(n+1)/2;
    vector<int> descend;
    vector<int> left;
    if (sum%2!=0) {
        cout << "NO";
        return 0;
    }
    sum /=2;
    while (sum>i) {
        descend.push_back(i);
        sum-=i;
        i--;
    }
    while (i>0) {
        if (sum==i) {
            descend.push_back(i);
        }
        else {
            left.push_back(i);
        }
        i--;
    }
    cout<< "YES" << '\n';
    cout << descend.size() << '\n';
    for (i=0; i<(int)descend.size(); i++) cout << descend[i] << ' ';
    cout << '\n' <<left.size() << '\n';
    for (i=0; i<(int)left.size(); i++) cout << left[i] << ' ';
    return 0;
}