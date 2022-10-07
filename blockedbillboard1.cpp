//http://www.usaco.org/index.php?page=viewproblem2&cpid=759
#include <fstream>
#include <cmath>
#include <algorithm>
using namespace std;


int findsharedaxis(int a1, int a2, int b1, int b2) {
    int ans = min(b2, a2)-max(a1, b1);
    if (ans<0) ans = 0;
    return ans;
}

int main() {
    ifstream fin("billboard.in");
    ofstream fout("billboard.out");

    int ax1, ax2, ay1, ay2;
    int bx1, bx2, by1, by2;
    int cx1, cx2, cy1, cy2;
    int count = 0;
    fin >> ax1 >> ay1 >> ax2 >> ay2;
    fin >> bx1 >> by1 >> bx2 >> by2;
    fin >> cx1 >> cy1 >> cx2 >> cy2;

    count += abs((ax2-ax1)*(ay2-ay1));
    count += abs((bx2-bx1)*(by2-by1));
    count -= findsharedaxis(ax1, ax2, cx1, cx2)*findsharedaxis(ay1, ay2, cy1, cy2);
    count -= findsharedaxis(bx1, bx2, cx1, cx2)*findsharedaxis(by1, by2, cy1, cy2);
    
    fout << count;

    return 0;
}