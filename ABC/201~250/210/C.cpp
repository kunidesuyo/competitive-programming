#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int c[n];
    for(int i = 0; i < n; i++) cin >> c[i];

    int ans = 0;
    map<int, int> m;

    for(int i = 0; i < k; i++) {
        m[c[i]]++;
    }
    ans = max(ans, (int)m.size());
    //m.erase(1);
    //cout << m.size() << endl;

    for(int i = 0; i+k < n; i++) {
        m[c[i]]--;
        if(m[c[i]] == 0) {
            m.erase(c[i]);
        }
        m[c[i+k]]++;
        ans = max(ans, (int)m.size());
    }

    cout << ans << endl;

    return 0;
}