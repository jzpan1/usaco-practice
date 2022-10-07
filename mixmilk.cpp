//http://www.usaco.org/index.php?page=viewproblem2&cpid=855
#include <fstream>
#include <algorithm>

using namespace std;

struct Bucket{
    int cap, mk;
    Bucket(int capacity, int milk)
    {
        cap = capacity;
        mk = milk;
    }
};

void pour(Bucket &a, Bucket &b)
{
    int temp;
    if (b.mk + a.mk <= b.cap) {
        b.mk += a.mk;
        a.mk = 0;
    }
    else {
        a.mk -= b.cap-b.mk;
        b.mk = b.cap;
    }
}

int main() {
    ifstream fin("mixmilk.in");
    int x, y;
    fin >> x >> y;
    Bucket a(x,y);
    fin >> x >> y;
    Bucket b(x,y);
    fin >> x >> y;
    Bucket c(x,y);
    for (int i = 0; i<33; i++) {
        pour(a, b);
        pour(b,c);
        pour(c,a);
    }
    pour(a,b);
    ofstream fout("mixmilk.out");
    fout << a.mk << endl;
    fout << b.mk << endl;
    fout << c.mk << endl;
    return 0;
}