//http://www.usaco.org/index.php?page=viewproblem2&cpid=807
#include <fstream>
#include <cmath>
using namespace std;

int main() {
    ifstream fin("teleport.in");
    ofstream fout("teleport.out");
    int a, b, x, y; fin >> a >> b >> x >> y;
    int ans = abs(min(a, b) - min(x, y))+ abs(max(a, b) - max(x, y));
    if ( abs(b-a)> ans ) {
        fout << ans;
    }
    else {
        fout << abs(b-a);
    }

    return 0;
}