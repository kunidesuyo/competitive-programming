#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    set<int> x, y;
    for(int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        if(a == 1) {
            x.insert(b);
        }
        if(b == n) {
            y.insert(a);
        }
    }

    bool ans = false;

    for(auto itr = x.begin(); itr != x.end(); itr++) {
        if(y.find(*itr) != y.end()) {
            ans = true;
            break;
        }
    }

    cout << (ans ? "POSSIBLE" : "IMPOSSIBLE") << endl;


    return 0;
}