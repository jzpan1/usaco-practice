//http://www.usaco.org/index.php?page=viewproblem2&cpid=664
#include <fstream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    ifstream fin("blocks.in");
    ofstream fout("blocks.out");
    int len;
    int alph[26] = {};
    int temp1[26] = {};
    int temp2[26] = {};
    string a, b;
    fin >> len;
    for (int i = 0; i<len; i++) {
        fin >> a >> b;
        for (char j : a) {
            temp1[j-'a'] ++;
        }
        for (char j : b) {
            temp2[j-'a'] ++;
        }
        for (int j = 0; j < 26; j++) {
            alph[j] += max(temp1[j], temp2[j]);
            temp1[j] = 0; temp2[j] = 0;
        }
    }
    for (int i : alph) {
        fout << i << endl;
    }
    return 0;
}