#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int tc; cin >> tc;
    while (tc--) {
        int a, b, c;
        cin >> a >> b >> c;

        float res = ((1.0 * a + b) / 2 - min(a, b)) / c;
        if (res == 0) {
            cout << 0 << endl;
        } else if (res > 0 && res < 1) {
            cout << 1 << endl;
        } else if (res >= 1) {
            cout << ceil(res) << endl;
        }
    }
    return 0;
}
