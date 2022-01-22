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
    int p[n];
    for(int i = 0; i < n; i++) cin >> p[i];

    int id;
    for(int i = 0; i < n; i++) {
        if(p[i] == 1) id = i;
    }

    int ans = inf;
    if(p[(id+1)%n] == 2) {
        ans = min(ans, id);
        ans = min(ans, 1+n-id+1);
    } else {
        ans = min(ans, id + 2);
        ans = min(ans, 1+n-id-1);
    }

    cout << ans << endl;

    return 0;
}