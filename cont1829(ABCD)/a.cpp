#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int TC; cin >> TC;
    while (TC--) {
        string s1 = "codeforces";
        string s2;
        cin >> s2;
 
        int cnt = 0;
        for (int i = 0; i < 10; i++) {
            if (s1[i] != s2[i]) {
                cnt++;
            }
        }
 
        cout << cnt << endl;
    }
    return 0;
}