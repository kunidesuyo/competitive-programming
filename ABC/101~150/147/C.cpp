#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    vector<int> honests[15];
    vector<int> liars[15];
    for(int i = 0; i < n; i++) {
        int a;
        cin >> a;
        for(int j = 0; j < a; j++) {
            int x, y;
            cin >> x >> y;
            if(y == 0) {
                liars[i].push_back(x-1);
            } else {
                honests[i].push_back(x-1);
            }
        }
    }


    int ans = 0;

    for(int bit = 0; bit < 1<<n; bit++) {
        vector<int> p(n, -1);//shoujiki 1 uso 0
        bool c = true;
        int shoujiki = 0;
        for(int i = 0; i < n; i++) {
            if(bit & (1<<i)) {
                shoujiki++;
                for(auto x : honests[i]) if(!(bit & (1<<x))) c = false;
                for(auto x : liars[i]) if(bit & (1<<x)) c = false;
            }
            if(c == false) break;
        }
        if(c == true) ans = max(ans, shoujiki);
    }

    cout << ans << endl;

    return 0;
}