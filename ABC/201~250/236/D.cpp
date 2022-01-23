#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int n;
int a[2*8][2*8];

int ans;

void solve(int s, vector<int> z, int bit) {
    bool c = true;
    for(int i = 0; i < n; i++) {
        if(z[i] == 0) {
            c = false;
            break;
        }
    }
    if(c) {
        ans = max(ans, bit);
        return;
    }
    

}

int main() {
    cin >> n;
    for(int i = 0; i < 2*n; i++) {
        for(int j = 0; j < 2*n; j++) {
            a[i][j] = -1;
        }
    }
    for(int i = 0; i < 2*n-1; i++) {
        for(int j = 0; j < 2*n-1-i; j++) {
            cin >> a[i][j+i+1];
            a[j+i+1][i] = a[i][j+i+1];
        }
    }

    for(int i = 0; i < 2*n-1; i++) {
        for(int j = 0; j < 2*n-1-i; j++) {
            cout << a[i][j+i+1] << " ";
        }
        cout << "\n";
    }

    for(int i = 0; i < 2*n; i++) {
        for(int j = 0; j < 2*n; j++) {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }

    ans = 0;

    vector<int> z(n, 0);
    solve(0, z);




    return 0;
}