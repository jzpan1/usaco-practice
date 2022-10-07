//https://cses.fi/problemset/task/1755

#include <iostream>
#include <string>
#define ll long long


using namespace std;

int main() {
    int alph [26];
    int odd = -1;
    char t;
    string ans;
    while (cin >> t) {
        alph[t-'a'] += 1;
    }
    for (int i=0; i<26;i++) {
        if (alph[i]%2!=0) {
            if (odd != -1) {
                cout << "NO SOLUTION";
                return 0;
            }
            odd = i;
        }
    }
    for (int i=0; i<26; i++) {
        if (i!=odd) {
            for (int j = 0; j<alph[i]/2;j++) ans += char(i+'a');
        }
    }
    if (odd!=-1) {
        for (int j = 0; j<alph[odd];j++) ans += char(odd+'a');
    }
    for (int i=26; i>0; i--) {
        if (i!=odd) {
            for (int j = 0; j<alph[i]/2;j++) ans += char(i+'a');
        }
    }
    cout<<ans;
    return 0;
}