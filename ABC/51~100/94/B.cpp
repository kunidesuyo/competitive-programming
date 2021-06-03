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
    int n, m, x;
    cin >> n >> m >> x;
    int a[m];
    for(int i = 0; i < m; i++) {
        cin >> a[i];
    }

    int num = 0, num2 = 0;
    for(int i = 0; i < m; i++) {
        if(a[i] > x) {
            num++;
        } else if(a[i] < x) {
            num2++;
        }
    }
    if(num2 > num) {
        cout << num << endl;
    } else {
        cout << num2 << endl;
    }


    return 0;
}