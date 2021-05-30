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
    bool xa = false;
    bool xb = false;
    bool xc = false;
    if(a==b) xc = true;
    if(b==c) xa = true;
    if(a == c) xb = true;
    if(xa == false && xb == false && xc == false) {
        cout << 0 << endl;
        return 0;
    }
    if(xa) {
        cout << a << endl;
        return 0;
    }
    if(xb) {
        cout << b << endl;
        return 0;
    }
    if(xc) {
        cout << c << endl;
        return 0;
    }
    
    

    return 0;
}