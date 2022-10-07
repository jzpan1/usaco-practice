//http://www.usaco.org/index.php?page=viewproblem&cpid=1171
#include <iostream>
#include <algorithm>
#include <vector>
#define ll long long
using namespace std;

int main(){
    ll N;
    cin >> N;
    ll dists = 0;
    vector<ll> cows(N);
    for (int i = 0; i<N; i++) {
        cin >> cows[i];
    }

    vector<ll> eligible(0);
    eligible.push_back(0);
    ll ellen;
    for (int i = 1; i<N; i++) {
        ellen = eligible.end()-eligible.begin();
        //cout << ellen << " ";
        for (int j=ellen-1; j>=0; j--) {
            if (cows[i]<cows[eligible[j]]) {
                dists += i-eligible[j]+1;
                //cout << i << eligible[j] << "less" << endl;
                break;
            }
            else {
                dists += i-eligible[j]+1;
                eligible.erase(eligible.begin()+j, eligible.end());
                //cout << i << eligible[j] << "more" << endl;
            }
        }
        //cout << make_pair(cows[i], i).first << endl;
        eligible.push_back(i);
    }
    cout << dists;
}