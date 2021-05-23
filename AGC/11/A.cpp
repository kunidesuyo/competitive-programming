#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n, c, k;
    cin >> n >> c >> k;
    int t[n];
    for(int i = 0; i < n; i++) cin >> t[i];

    sort(t, t+n);

    int ans = 1;
    int time, capa;
    time = t[0];
    capa = 0;
    

    for(int i = 0; i < n; i++) {
        if(time <= t[i] && t[i] <= time+k && capa < c) {
            capa++;
        } else {
            capa = 1;
            time = t[i];
            ans++;
        }
        //printf("%d %d %d %d\n", i, time, capa, ans);
    }
    cout << ans << endl;

    return 0;
}