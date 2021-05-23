#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int a[3][3];
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> a[i][j];
        }
    }
    int n;
    cin >> n;
    int b[n];
    for(int i = 0;i < n; i++) cin >> b[i];


    for(int i = 0; i < n; i++) {
        for(int j = 0; j < 3; j++) {
            for(int k = 0; k < 3; k++) {
                if(b[i] == a[j][k]) a[j][k] = 0;
            }
        }
    }

    int bingo = 0;

    for(int i = 0; i < 3; i++) {
        if(a[0][i] + a[1][i] + a[2][i] == 0) bingo = 1;
        if(a[i][0] + a[i][1] + a[i][2] == 0) bingo = 1;
    }

    if(a[0][0] + a[1][1] + a[2][2] == 0) bingo = 1;
    if(a[0][2] + a[1][1] + a[2][0] == 0) bingo  = 1;

    if(bingo == 1) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    

    return 0;
}