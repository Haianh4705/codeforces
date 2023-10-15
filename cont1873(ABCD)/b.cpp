#include <bits/stdc++.h>

using namespace std;

int main() {
    int TC; cin >> TC;
    while (TC--) {
        int n; cin >> n;
        int a[n];
        int product = 1;

        for (int i = 0; i < n; i++) {
            int x; cin >> x;
            a[i] = x;
            product *= x;
        }

        int max_num = -1;
        for (int i = 0; i < n; i++) {
            int tmp = 1;
            for (int j = 0; j < n; j++) {
                if (j == i) tmp *= a[j] + 1;
                else tmp *= a[j];
            }
            if (tmp >= max_num) max_num = tmp;
        }

        cout << max_num << endl;
    }
    return 0;
}