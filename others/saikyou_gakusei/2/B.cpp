#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < m; i++) cin >> b[i];

    int ia = 0;
    int ib = 0;

    vector<int> ans;

    for(int i = 1; i <= 1000; i++) {
        if(ia > n-1) {
            if(b[ib] == i) {
                ans.push_back(i);
            }
        }
        if(ib > m-1) {
            if(a[ia] == i) {
                ans.push_back(i);
            }
        }
        if(!(ia >n-1) && !(ib > m-1)) {
            if((a[ia] == i && b[ib] != i) || (a[ia] != i && b[ib] == i)) {
                ans.push_back(i);
            }
        }
        
        if(a[ia] == i) ia++;
        if(b[ib] == i) ib++;
        if(ia >n-1 && ib > m-1) break;
    }

    for(int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << endl;



    return 0;
}