//https://codeforces.com/contest/279/problem/B
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {

	int n, t, ans = 0;

	cin >> n >> t;

	vector<int> books(n);

	for (int i = 0; i < n; i++){

		cin >> books[i];

	}


	int left = 0, right = 0, cur = 0;

	while (left < n && right < n) {

		// Finding the maximum right for which cur is less than t.

		while (right < n) {

			cur += books[right++];

			// Subtracting the exceeded book from cur.

			if (cur > t) {

				cur -= books[--right]; 

				break;

			}

		}


		ans = max(ans, right - left);

		cur -= books[left++];

	}


	cout << ans;

}