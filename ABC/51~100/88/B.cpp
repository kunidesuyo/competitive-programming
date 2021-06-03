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
    int bob=0, alice=0;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a, a+n, greater<int>());

    for(int i = 0; i < n; i++) {
        if(i%2 == 0) {
            alice += a[i];
        } else {
            bob += a[i];
        }
    }

    cout << alice - bob << endl;



    return 0;
}