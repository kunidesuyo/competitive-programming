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
    int a;
    vector<vector<int>> p(n+1);

    for(int i = 1; i <= n; i++) {
        cin >> a;
        p[a].push_back(i);
    }


    int q;
    cin >> q;
    for(int i = 0; i < q; i++) {
        int l, r, x;
        cin >> l >> r >> x;
        auto itr1 = lower_bound(p[x].begin(), p[x].end(), l);
        // cout << "itr1 " << itr1 - p[x].begin() << endl;
        auto itr2 = upper_bound(p[x].begin(), p[x].end(), r);
        // cout << "itr2 " << itr2 - p[x].begin() << endl;
        cout << itr2 - itr1 << endl;
    }

    // for(int i = 1; i <= n; i++) {
    //     for(int j = 0; j < p[i].size(); j++) {
    //         cout << p[i][j] << " ";
    //     }
    //     cout << "\n";
    // }


    return 0;
}