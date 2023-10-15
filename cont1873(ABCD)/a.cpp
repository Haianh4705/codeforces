#include <bits/stdc++.h>

using namespace std;

int main() {
    int TC; cin >> TC;
    while (TC--) {
        string s; cin >> s;
        string ac = "abc";

        bool check[3] = {false, false, false};

        for (int i = 0; i < 3; i++) {
            if (s[i] == ac[i]) {
                check[i] = true;
            }
        }

        bool test = false;
        for (int i = 0; i < 3; i++) {
            if (check[i]) {
                test = true;
                break;
            }
        }

        if (test) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}