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
    string s;
    cin >> s;
    int n = s.length();

    int ans = 0;

    for(int h = 0; h < n; h++) {
        for(int t = 0; t < n; t++) {
            bool is_acgt = true;
            for(int i = h; i <= t; i++) {
                if(!(s[i] == 'A'||s[i]=='C'||s[i]=='G'||s[i]=='T')) {
                    is_acgt = false;
                }
            }
            if(is_acgt) {
                ans = max(ans, t-h+1);
            }
        }
    }

    cout << ans << endl;

    return 0;
}