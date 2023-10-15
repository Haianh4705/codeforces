#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int tc; cin >> tc;
    while (tc--) {
        int n; cin >> n;
        vector<pair<int, int>> a;
        for (int i = 0; i < n; i++) {
            int x, y;
            cin >> x >> y;
            a.push_back({x, y});
        }

        bool win = true;
        for (int i = 1; i < n; i++) {
            if (a[i].first >= a[0].first) {
                if (a[i].second >= a[0].second) {
                    win = false;
                }
            }
        }

        if (win) cout << a[0].first << endl;
        else cout << -1 << endl;
    }

    return 0;
}
