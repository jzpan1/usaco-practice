//http://www.usaco.org/index.php?page=viewproblem2&cpid=1061
#include <iostream>
#include <algorithm>
#include <vector>
#define ll long long

using namespace std;

struct Cow {
    ll x, y, len;
    bool dir = false; // N = true
    bool win = true;
    Cow(char direction, int inx, int iny) {
        x = inx;
        y = iny;
        if (direction=='N') dir = true;
    }
    void lose(ll length) {
        if (!win) {
            len = min(length, len);
        }
        else {
            len = length;
        }
        win = false;
        }
};

void checkWin(Cow a, Cow b) {
    
}

int main() {
    int len;
    vector<Cow> cows;
    cin >> len;
    char dir;
    ll x, y;
    ll length;
    for (int i = 0; i<len; i++) {
        cin >> dir >> x >> y;
        cows.push_back(Cow(dir, x, y));
    }
    vector<Cow> fin_cows;
    ll minlen;
    int minindex;
    ll xdist;
    ll ydist;
    for (int i = 0; i<len; i++) {
        minlen = -1;
        for (int i = 0; i<len; i++) {
            if (cows[i].dir && cows[i].win) {
                for (int j = 0; j < len; j++) {
                    xdist = cows[i].x - cows[j].x;
                    ydist = cows[j].y-cows[i].y;
                    if (!cows[j].dir && cows[j].y>cows[i].y && cows[j].x< cows[i].x && cows[j].win) {
                        if (ydist < xdist) {
                            if (minlen == -1) {
                                minlen = xdist;
                                minindex = j;
                            }
                            else if (minlen > xdist){
                                minlen = min(xdist, minlen);
                                minindex = j;
                            }
                        }
                        else if (ydist > xdist) {
                            if (minlen == -1) {
                                minlen = ydist;
                                minindex = i;
                            }
                            else if (minlen > ydist){
                                minlen = min(ydist, minlen);
                                minindex = i;
                            }
                        }
                    }
                }
            }
        }
        if (!(minlen == -1)) {
            cows[minindex].lose(minlen);
        }
    }
    for (int i = 0; i<len; i++) {
        if (cows[i].win) {
            cout << "Infinity\n";
        }
        else {
            cout << cows[i].len << endl;
        }
    }
    return 0;
}