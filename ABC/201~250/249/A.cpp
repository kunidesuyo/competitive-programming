#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
    int a, b, c, d, e, f, x;
    cin >> a >> b >> c >> d >> e >> f >> x;

    int aoki = 0;
    int takahashi = 0;
    int y = x;
    while(y > 0) {
        if(a <= y) {
            takahashi += a * b;
            y -= a;
            y -= c; 
        } else {
            takahashi += y * b;
            break;
        }
    }
    y = x;
    while(y > 0) {
        if(d <= y) {
            aoki += d * e;
            y -= d;
            y -= f; 
        } else {
            aoki += y * e;
            break;
        }
    }

    // cout << aoki << endl;
    // cout << takahashi << endl;


    if(aoki > takahashi) {
        cout << "Aoki" << endl;
    } else if (aoki == takahashi) {
        cout << "Draw" << endl;
    } else {
        cout << "Takahashi" << endl;
    }

    return 0;
}