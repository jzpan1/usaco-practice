//https://codeforces.com/contest/1216/problem/C
#include <iostream>
#include <algorithm>
using namespace std;

struct Rect{
    long long x1, y1, x2, y2;
    long long area() {
        if (x2>x1 && y2>y1){
            return (y2-y1) * (x2-x1);
        }
        return 0LL;
    }
};

Rect intersect(Rect p, Rect q) {
    Rect a;
    a.x1 = max(p.x1, q.x1);
    a.x2 = min(p.x2, q.x2);
    a.y1 = max(p.y1, q.y1);
    a.y2 = min(p.y2, q.y2);
    return a;
}

int main() {
    Rect w, a, b;
    cin >> w.x1 >> w.y1 >> w.x2 >> w.y2;
    cin >> a.x1 >> a.y1 >> a.x2 >> a.y2;
    cin >> b.x1 >> b.y1 >> b.x2 >> b.y2;
    Rect x = intersect(w, a);
    Rect y = intersect(w, b);
    Rect z = intersect(x, y);
    if (x.area() + y.area() - z.area()<w.area()) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    return 0;
}