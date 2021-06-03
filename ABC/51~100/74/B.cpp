#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

template<class T> inline bool chmin(T& a, T b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
    }
template<class T> inline bool chmax(T& a, T b) {
    if (a < b) {
        a = b;
        return true;
    }
    return false;
}

int main() {
    int n, k;
    cin >> n >> k;
    int x[n];
    for(int i = 0; i < n; i++) cin >> x[i];

    int ans = 0;

    for(int i = 0; i < n; i++) {
        int num = min(abs(x[i]-k)*2, 2*x[i]);
        ans += num;
    }

    cout << ans << endl;

    return 0;
}