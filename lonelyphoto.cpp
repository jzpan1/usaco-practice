//http://www.usaco.org/index.php?page=viewproblem&cpid=1143

#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long
/*
for char:
    rcount = 0;
    lcount = 0;
    for (greater)
        if (not char) rcount ++;
        else break;
    for (less)
        if (not char) rcount ++;
        else break;
    for i<rcount
        for j<lcount
            if i+j>=2
                thrown ++

*/
int main(){
    int n;
    cin >> n;
    string cows;
    cin >> cows;
    int rcount, lcount;
    int thrown = 0;
    for (int i = 0; i< n; i++) {
        rcount = 0;
        lcount = 0;
        for (int j=i+1; j<n; j++){
            if (cows[j]!=cows[i]) rcount ++;
            else break;
        }
        for (int j = i-1; j>=0; j--){
            if (cows[j]!=cows[i]) lcount ++;
            else break;
        }
        for (int j = 0; j<=rcount; j++){
            for (int k = 0; k<=lcount; k++){
                if (j+k>=2) thrown ++;
            }
        }
    }
    cout << thrown;
    return 0;
}

/*#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long

int main(){
    int n;
    cin >> n;
    string cows;
    cin >> cows;
    int g, h;
    int thrown = 0;
    for (int i = 0; i< n; i++) {
        for (int j = i+3; j<n +1; j++) {
            g=0; h=0;
            for (int k = i; k<j; k++){
                if (cows[k]=='G') g++;
                else h++;
            }
            if (g==1 || h == 1) thrown++;
        }
    }
    cout<< thrown;
    return 0;
}*/