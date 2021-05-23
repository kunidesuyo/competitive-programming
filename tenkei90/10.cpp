#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    //ruisekiwa
    int n;
    cin >> n;
    int c[n];
    vector<int> p1(n), p2(n);
    for(int i = 0; i < n; i++) {
        cin >> c[i];
        if(c[i] == 1) {
            cin >> p1[i];
        } else {
            cin >> p2[i];
        }
    }
    vector<int> sump1(n), sump2(n);
    for(int i = 0; i < n; i++) {
        if(i==0) {
            sump1[i] = p1[i];
            sump2[i] = p2[i];
            continue;
        }
        sump1[i] = sump1[i-1] + p1[i];
        sump2[i] = sump2[i-1] + p2[i];
    }

    int q;
    cin >> q;
    int l[q], r[q];
    for(int i = 0; i < q; i++) cin >> l[i] >> r[i];

    for(int i = 0; i < q; i++) {
        l[i]--; r[i]--;
        cout << sump1[r[i]] - sump1[l[i]] + p1[l[i]] << " ";
        cout << sump2[r[i]] - sump2[l[i]] + p2[l[i]] << endl;
    }

    return 0;
}