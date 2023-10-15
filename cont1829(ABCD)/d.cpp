#include <bits/stdc++.h>
using namespace std;

bool div3(int n, int m) {
	if (n == m) return true;
	else if (n % 3 != 0) return false;
	else {
		return (div3(n / 3, m) || div3(n / 3 * 2, m));
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int tc; cin >> tc;
	while (tc--) {
		int n, m; cin >> n >> m;
		cout << (div3(n, m) ? "YES" : "NO") << endl;
	}
}
