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
    int a, b, c;
    cin >> a >> b >> c;

    if(a == b && b == c) {
        if(a%2 == 0) {
            cout << -1 << endl;
        } else {
            cout << 0 << endl;
        }
        return 0;
    }

    int i = 0;

    while(true) {
        if(a % 2 != 0 || b % 2 != 0 || c % 2 != 0) break;
        int bc = a/2;
        int ca = b/2;
        int ab = c/2;
        a = ab + ca;
        b = bc + ab;
        c = ca + bc;
        i++;
    }

    cout << i << endl;

    return 0;
}