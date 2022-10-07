//http://www.usaco.org/index.php?page=viewproblem2&cpid=617
#include <fstream>
#include <algorithm>
#include <vector>
using namespace std;
#define ll long long

int main(){
    ifstream fin("balancing.in");
    ofstream fout("balancing.out");
    int N;
    ll B;
    ll in1, in2;
    vector<ll> x(N);
    vector<ll> y(N);
    int m[] = {0,0,0,0};
    int maximum= 0;
    int min_max = N;
    for (ll i = 0; i<N; i++) {
        fin >> in1 >> in2;
        x[i] = in1;
        y[i] = in2;
    }
    for (int i = 0; i<B; i+=2){
        for (int j = 0; j<B; j+=2) {
            m[0,1,2,3] = 0,0,0,0;
            for (int k = 0; k < N; k++){
                if (x[k]<i&&y[k]<j){
                    m[0]++;
                }
                if (x[k]<i&&y[k]>j){
                    m[1]++;
                }
                if (x[k]>i&&y[k]<j){
                    m[2]++;
                }
                if (x[k]>i&&y[k]>j){
                    m[3]++;
                }
            }
            maximum = max(max(m[0], m[1]), max(m[2], m[3]));
            if (maximum<min_max){
                min_max=maximum;
            }
        }
    }
    fout << min_max;
}