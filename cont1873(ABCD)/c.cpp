#include <bits/stdc++.h>

using namespace std;

int main() {
    int TC; cin >> TC;
    while (TC--) {
        string a[10];

        for (int i = 0; i < 10; i++) {
            string x; cin >> x;
            a[i] = x;
        }

        int points = 0;
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                if (a[i][j] == 'X') {
                    points += min({i, j, 9-i, 9-j}) + 1;
                }
            }
        }

        cout << points << endl;
    }
    return 0;
}
