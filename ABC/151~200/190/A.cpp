#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    if(a > b) {
        cout << "Takahashi" << endl;
    } else if(a < b) {
        cout << "Aoki" << endl;
    } else {
        if(c==0) {
            cout << "Aoki" << endl;
        } else {
            cout << "Takahashi" << endl;
        }
    }

    return 0;
}