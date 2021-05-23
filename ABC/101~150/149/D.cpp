#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int r, s, p;
    cin >> r >> s >> p;
    string t;
    cin >> t;

    bool win[n];
    for(int i = 0; i < n; i++) {
        if(i < k) {
            win[i] = true;
        } else {
            win[i] = false;
        }
    }

    for(int i = 0; i < k; i++) {
        for(int j = 1; i + j*k < n; j++) {
            int a, b;
            a = i + k * (j-1);
            b = i + k * j;
            if(t[a] == t[b]) {
                if(win[a] == true) {
                    win[b] = false;
                } else {
                    win[b] = true;
                }
            } else {
                win[b] = true;
            }
        }
    }

    int ans = 0;

    for(int i = 0; i < n; i++) {
        if(win[i]) {
            if(t[i] == 'r') {
                ans += p;
            } else if(t[i] == 's') {
                ans += r;
            } else if(t[i] == 'p') {
                ans += s;
            }
        }
    }

    cout << ans << endl;

    return 0;
}