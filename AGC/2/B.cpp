#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int x[m], y[m];
    for(int i = 0; i < m; i++) cin >> x[i] >> y[i];

    set<int> ans;
    vector<int> box(n, 1);
    ans.insert(0);
    for(int i = 0; i < m; i++) {
        if(ans.find(x[i]-1) != ans.end()) {
            ans.insert(y[i]-1);
            if(box[x[i]-1] == 1) {
                ans.erase(x[i]-1);
            }
        }
        box[x[i]-1]--;
        box[y[i]-1]++;
    }

    cout << ans.size() << endl;

    return 0;
}