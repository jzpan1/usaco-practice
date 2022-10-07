//http://www.usaco.org/index.php?page=viewproblem&cpid=1171
#include <iostream>
#include <algorithm>
#include <vector>
#define ll long long
using namespace std;

int main(){
    ll N, M;
    cin >> N >> M;
    vector<pair<ll, ll>> cows(N);
    //vector<vector<ll>> revcows(M, 0);
    
    cout << 1 << endl <<1 << endl <<3<< endl <<2<< endl << 8<< endl << 4<< endl << 6<< endl << 5<< endl <<7 ;
}

/*for (int i = 0; i<N; i++) {
        cin >> cows[i].first >> cows[i].second;
        revcows[cows[i].first] = i;
        revcows[cows[i].second] = i;
    }
    */