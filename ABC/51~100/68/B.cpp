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
    int n;
    cin >> n;

    if(n == 1) {
        cout << 1 << endl;
        return 0;
    }

    int ans = 0;
    int num;
    for(int i = 0; i <= 6; i++) {
        if(i == 1) {
            num = 2;
        } else {
            num *= 2;
        }
        if(num <= n) {
            ans = max(ans, num);
        }
    }

    cout << ans << endl;

    return 0;
}