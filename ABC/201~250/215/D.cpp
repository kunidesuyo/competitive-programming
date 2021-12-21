#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;


int main() {
    int n, m;
    cin >> n >> m;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];

    set<int> s;
    for(int i = 0; i < n; i++) {
        for(int j = 2; j*j <= a[i]; j++) {
            if(a[i] % j != 0) continue;
            while(a[i] % j == 0) {
                a[i] /= j;
            }
            s.insert(j);
        }
        if(a[i] != 1) s.insert(a[i]);
    }



    vector<int> ans;
    ans.push_back(1);
    for(int i = 2; i <= m; i++) {
        bool ok = true;
        for(auto x : s) {
            if(i % x == 0) {
                ok = false;
                break;
            }
        }
        if(ok) ans.push_back(i);
    }

    cout << ans.size() << endl;
    for(auto x : ans) {
        cout << x << endl;
    }


    return 0;
}