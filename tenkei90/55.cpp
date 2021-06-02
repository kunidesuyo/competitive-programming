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
    int n, p, q;
    cin >> n >> p >> q;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int ans = 0;
    for(int i = 0; i < n-4; i++) {
        for(int j = i+1; j < n-3; j++) {
            for(int k = j+1; k < n-2; k++) {
                for(int l = k+1; l < n-1; l++) {
                    for(int m = l+1; m < n; m++) {
                        ll num = a[i];
                        num *= a[j];
                        num %= p;
                        num *= a[k];
                        num %= p;
                        num *= a[l];
                        num %= p;
                        num *= a[m];
                        num %= p;
                        if(num == q) ans++;
                    }
                }
            }
        }
    }

    cout << ans << endl;


    return 0;
}