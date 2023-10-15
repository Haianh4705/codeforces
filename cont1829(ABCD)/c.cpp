#include <bits/stdc++.h>

using namespace std;

int main() {
    int TC; cin >> TC;
    while (TC--) {
        int n; cin >> n;
        vector<pair<int, string>> a;
        
        for (int i = 0; i < n; i++) {
            int m;
            string s;
            cin >> m >> s;
            a.push_back({m, s});
        }

        int mn = INT32_MAX;
        int mn_left = INT32_MAX;
        int mn_right = INT32_MAX;
        for (int i = 0; i < n; i++) {
            if (a[i].second == "11") {
                mn = min(mn, a[i].first);
            } else if (a[i].second == "10") {
                mn_left = min(mn_left, a[i].first);
            } else if (a[i].second == "01") {
                mn_right = min(mn_right, a[i].first);
            }
        }
        if (mn_left != INT32_MAX && mn_right != INT32_MAX) {
            mn = min(mn, mn_left + mn_right);
        }

        if (mn == INT32_MAX) cout << -1 << endl;
        else cout << mn << endl;
    }
    return 0;
}