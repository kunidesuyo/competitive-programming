#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int main() {
    int l, q;
    cin >> l >> q;

    set<int> cut;
    cut.insert(0);
    cut.insert(l);

    for(int i = 0; i < q; i++) {
        int c, x;
        cin >> c >> x;
        if(c == 1) {
            cut.insert(x);
        } else {
            auto it = cut.lower_bound(x);
            cout << (*it) - *prev(it) << endl;
        }
    }

    return 0;
}

