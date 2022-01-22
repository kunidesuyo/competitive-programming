#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
    int n;
    cin >> n;
    int R[n], C[n];
    for(int i = 0; i < n; i++) cin >> R[i];
    for(int i = 0; i < n; i++) cin >> C[i];
    int q;
    cin >> q;
    int r[q], c[q];
    for(int i = 0; i < q; i++) {
        cin >> r[i] >> c[i];
        r[i]--;
        c[i]--;
    }

    for(int i = 0; i < q; i++) {
        int num = 0;
        num = R[r[i]] + C[c[i]];
        if(num <= n) cout << ".";
        else cout << "#";
    }
    cout << "\n";

    return 0;
}