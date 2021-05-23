#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int c[3][3];
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> c[i][j];
        }
    }
    int a[3], b[3];
    a[0] = 0;

    for(int i = 0; i < 3; i++) {
        b[i] = c[0][i];
    }
    for(int i = 1; i < 3; i++) {
        a[i] = c[i][0] - b[0];
    }

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            if(c[i][j] != a[i] + b[j]) {
                cout << "No" << endl;
                return 0;
            }
        }
    }

    cout << "Yes" << endl;
    return 0;
}