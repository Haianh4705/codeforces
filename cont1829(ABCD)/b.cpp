#include <bits/stdc++.h>

using namespace std;

int main() {
    int TC; cin >> TC;
    while (TC--) {
        int n; cin >> n;
        vector<int> a;
        for (int i = 0; i < n; i++) {
            int x; cin >> x;
            a.push_back(x);
        }

        int cnt = 0, mx = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] == 0) {
                cnt += 1;
            } else {
                mx = max(cnt, mx);
                cnt = 0;
            }
        }

        cout << max(cnt, mx) << endl;
    }
    return 0;
}