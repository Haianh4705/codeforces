#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int tc; cin >> tc;
	while (tc--) {
		int n; cin >> n;
		int winner = -1;
		int best_score = 0;
		
		for (int i = 1; i <= n; i++) {
			int a, b;
			cin >> a >> b;
			if (a <= 10 && b > best_score) {
				winner = i;
				best_score = b;
			}
		}
		
		cout << winner << endl;
	}
	return 0;
}
