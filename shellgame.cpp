//http://www.usaco.org/index.php?page=viewproblem2&cpid=891
#include <fstream>
#include <vector>
using namespace std;

int main() {
    ifstream fin("shell.in");
    int n;
    fin >> n;
    vector<vector<int>> a(n);
    for (int j = 0; j<n; j++) {
        a[j].resize(3);
        fin >> a[j][0] >> a[j][1] >> a[j][2];
    }
    int max = 0;
    int temp;
    int currpos;
    for (int i = 1; i<4; i++) {
        temp = 0;
        currpos = i;
        for (int j = 0; j<n; j++) {
            if (currpos==a[j][0]) currpos = a[j][1];
            else if (currpos==a[j][1]) currpos = a[j][0];
            if (currpos == a[j][2]) temp++;
        }
        if (max<temp) max = temp;
    }
    ofstream fout("shell.out");
    fout << max;
    return 0;
}