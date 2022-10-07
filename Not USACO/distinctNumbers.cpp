//https://cses.fi/problemset/task/1621
#include <iostream>
#include <algorithm>
#include <unordered_set>

using namespace std;

int main()
{
	int n, x, y;
	unordered_set<int> nums(0);
	cin >> n;
	for (int i=0; i<n; i++)
	{
		cin >> x;
		nums.insert(x);
	}
	cout << nums.size();
	return 0;
}