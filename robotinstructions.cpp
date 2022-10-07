//www.usaco.org/index.php?page=viewproblem&cpid=1195
#include <iostream>
#include <map>
#define ll long long
using namespace std;

struct Coord {
    ll x;
    ll y;
    Coord operator+( Coord other) {
        Coord sum = Coord();
        sum.x = x+ other.x;
        sum.y = y + other.y;
        return sum;
    }
    Coord operator-( Coord other) {
        Coord sum = Coord();
        sum.x = x- other.x;
        sum.y = y- other.y;
        return sum;
    }
    bool operator==(Coord other) {
        if (other.x == x && other.y == y) return true;
    }
};

pair<map<Coord, Coord>, Coord>  twosum(Coord target, Coord curr) {
    if (map)
}

int main(){

    return 0;
}