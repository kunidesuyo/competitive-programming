#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < m; i++) cin >> b[i];

    for(int i = 0; i < m; i++) {
        bool ex = false;
        for(int j = 0; j < n; j++) {
            if(a[j] == b[i]) {
                ex = true;
                a[j] = 0;
                break;
            }
        }
        if(ex == false) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;

    return 0;
}