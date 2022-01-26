#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int k;
		cin >> k;
		// the answer is the remainder of 52 and k
		cout << 52 % k << '\n';
	}
	return 0;
}
