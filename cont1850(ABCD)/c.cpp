#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int tc; cin >> tc;
	while (tc--) {
		string a[8];
		for (int i = 0; i < 8; i++) {
			cin >> a[i];
		}
		
		for (int i = 0; i < 8; i++) {
			for (int j = 0; j < 8; j++) {
				if (a[i][j] != '.') {
					cout << a[i][j];
				}
			}
		}
		
		cout << endl;
	}
}
