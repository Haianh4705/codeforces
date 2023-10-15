#include <bits/stdc++.h>

using namespace std;

int main() {
    int TC; cin >> TC;
    while (TC--) {
        int n, k; cin >> n >> k;
        string s; cin >> s;

        int tmp = 0, cnt = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == 'B' && tmp == 0) {
                cnt++;
                tmp = k - 1;
                continue;
            }
            if (tmp > 0) tmp--;
        }

        cout << cnt << endl;
    }
    return 0;
}