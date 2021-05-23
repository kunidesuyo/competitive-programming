#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n;
    cin >> n;
    int d[n];
    map<int, int> dd, tt;
    for(int i = 0; i < n; i++) {
        cin >> d[i];
        dd[d[i]]++;
    }
    int m;
    cin >> m;
    int t[m];
    for(int i = 0; i < m; i++) {
        cin >> t[i];
        tt[t[i]]++;
    }

    bool ans = true;
    for(int i = 0; i < m; i++) {
        int x = t[i];
        if(dd[x] < tt[x]) {
            ans = false;
            break;
        }
    }

    cout << (ans ? "YES" : "NO") << endl;

    return 0;
}