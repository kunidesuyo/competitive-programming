#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n;
    cin >> n;
    int c[n-1], s[n-1], f[n-1];
    for(int i = 0; i < n-1; i++) cin >> c[i] >> s[i] >> f[i];

    for(int p = 0; p < n-1; p++) {
        int time = 0;
        for(int i = p; i < n-1; i++) {
            if(time <= s[i]) {
                time = s[i];
            }
            int add;
            if(time % f[i] == 0) {
                add = 0;
            } else {
                add = f[i] - (time % f[i]);
            }
            time += add + c[i];
        }
        cout << time << endl;
    }
    cout << 0 << endl;

    return 0;
}