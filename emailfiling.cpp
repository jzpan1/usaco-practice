#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
using namespace std;


int main(){
    ll T, M, N, K;
    ll m, n;
    bool works;
    vector<ll> emails(0);
    vector<ll> temp(0)
    cin >> T;
    for (ll i = 0; i<T; i++) {
        works = true;
        cin >> M >> N >> K;
        emails.resize(N);
        for (ll j = 0; j<N; j++) {
            cin >> emails[j];
            //cout << emails[j];
        }
        m=M;
        for (ll j = N-1; j>0; j--) {
            m=min(m, emails[j]);
            if (emails[j-1]-emails[j]>K) {
                cout << "NO" << endl;
                works = false;
                break;
            }
            if (m<emails[j] && emails[j-1]-m>=K && emails[j]-emails[j-1]>=K){
                cout << "NO" << endl;
                works = false;
                break;
            }
            if (works==false) break;
        }
        for (ll j = 0; j<N; j++) {
            
        }
        if (works) cout << "YES" << endl;

    }
    return 0;
}