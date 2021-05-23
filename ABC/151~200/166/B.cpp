#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> sunuke(n);
    for(int i = 0; i < k; i++) {
        int d;
        cin >> d;
        for(int j = 0; j < d; j++) {
            int a;
            cin >> a;
            sunuke[a - 1] = 1;
        }
    }

    
    int ans = 0;
    for(int i = 0; i < n; i++) {
        if(!sunuke[i]) ans++;
    }

    cout << ans << endl;

    return 0;
}