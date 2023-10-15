#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int tc; cin >> tc;
	while (tc--) {
		int n, k; cin >> n >> k;
		vector<int> a;
		for (int i = 0; i < n; i++) {
			int x; cin >> x;
			a.push_back(x);
		}
		
		sort(a.begin(), a.end());
		
		int length = 0, mx = 0;
		for (int i = 0; i < n; i++) {
			if (length == 0) length++;
			else {
				if (a[i] - a[i-1] <= k) {
					length++;
				} else {
					length = 1;
				}
			}
			mx = max(mx, length);
		}
		
		cout << n - mx << endl;
	}
}
