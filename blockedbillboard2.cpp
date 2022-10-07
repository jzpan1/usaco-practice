//http://www.usaco.org/index.php?page=viewproblem2&cpid=783
#include <fstream>
#include <algorithm>
using namespace std;

int overlap(int a, int a2, int b, int b2) {
    if (min(a2, b2) - max(a, b) > 0 ) {
        return min(a2, b2) - max(a, b);
    }
    return 0;
}

int main() {
    ifstream fin("billboard.in");
    ofstream fout("billboard.out");
    int x1, y1, x2, y2; fin >> x1 >> y1 >> x2 >> y2;
    int w1, z1, w2, z2; fin >> w1 >> z1 >> w2 >> z2;
    if ((x1<w1&&x2>w2)||(y1<z1&&y2>z2)) {
        fout << (x2-x1)*(y2-y1);
        return 0;
    }
    if (overlap(x1, x2, w1, w2) == x2-x1) {
        fout << (y2-y1-overlap(y1, y2, z1, z2))*(x2-x1);
    }
    else if (overlap(y1, y2, z1, z2) == y2-y1) {
        fout << (x2-x1-overlap(x1, x2, w1, w2))*(y2-y1);
    }
    else {
        fout << (x2-x1)*(y2-y1);
    }

    return 0;
}