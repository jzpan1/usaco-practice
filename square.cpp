//http://www.usaco.org/index.php?page=viewproblem2&cpid=663
#include <fstream>
#include <algorithm>
using namespace std;
int main() {
    ifstream fin("square.in");
    ofstream fout("square.out");
    int a1, b1, a2, b2;
    int c1, d1, c2, d2;
    fin >> a1 >> b1 >> a2 >> b2;
    fin >> c1 >> d1 >> c2 >> d2;
    int x = max(a2, c2) - min(a1, c1);
    int y = max(b2, d2) - min(b1, d1);
    fout <<  max(x*x, y*y);
    return 0;
}