#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n, w;
    cin >> n >> w;
    int s[n], t[n], p[n];
    for(int i = 0; i < n; i++) cin >> s[i] >> t[i] >> p[i];

    pair<int, int> stp[2*n];

    for(int i = 0; i < n; i++) {
        stp[2 * i].first = s[i]; 
        stp[2 * i].second = p[i]; 
        stp[2 * i + 1].first = t[i]; 
        stp[2 * i + 1].second = -p[i]; 
    }
    sort(stp, stp + 2 * n);
    /*for(int i = 0; i < 2 * n; i++) {
        cout << stp[i].second << endl;
    }*/

    int water = 0;
    bool ans = true;
    for(int i = 0; i < 2 * n; i++) {
        water += stp[i].second;
        //cout << i << " " << water << endl;
        if(water > w) {
            ans = false;
            break;
        }
    }

    cout << ((ans) ? "Yes" : "No") << endl;



    return 0;
}