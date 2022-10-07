//http://www.usaco.org/index.php?page=viewproblem2&cpid=567
#include <iostream>
#include <vector>

using namespace std;


int main() {

	freopen("paint.in","r",stdin);

	// reuse standard in to read from "paint.in"

	freopen("paint.out","w",stdout);

	// reuse standard out to write to "paint.out"

	vector<bool> cover(100);

	int a, b, c, d; cin >> a >> b >> c >> d;

	for (int i = a; i < b; ++i) cover[i] = 1;

	for (int i = c; i < d; ++i) cover[i] = 1;

	int ans = 0;

	for (int i = 0; i < 100; ++i) ans += cover[i];

	cout << ans;

}