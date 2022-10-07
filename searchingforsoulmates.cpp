//http://www.usaco.org/index.php?page=viewproblem&cpid=1170

#include <iostream>
#include <algorithm>
#include <math.h>
#define ll long long
using namespace std;

double ln2 = log(2);

int main(){
    int N;
    ll a, b;
    int temp = 0;
    int count;
    cin >> N;
    for (int i = 0; i<N; i++) {
        count = 0;
        cin >> a >> b;
        
        while (a!=b){
            temp = (int)((log(b/a)/ln2));
            count ++;
            if (a>b && a%2 == 1){
                a++;
            }
            else if (a>b){
                a/=2;
            }
            else {
                if (2*a>b) {
                    if (b-a>5) {
                        if (a%2 == 1){
                            a++;
                        }
                        else {
                            a/=2;
                        }
                    }
                    else {
                        count += b-a-1;
                        a=b;
                        }
                }
                else {
                    if (b%2 == 1){
                        b--;
                    }
                    else {
                        b/=2;
                    }
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}