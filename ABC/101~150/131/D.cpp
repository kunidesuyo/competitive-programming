#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    pair<int, int> b[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i] >> b[i].first;
        b[i].second = i;
    }

    sort(b, b+n);

    int time = 0;
    bool ans = true;
 
    for(int i = 0; i < n; i++) {
        time += a[b[i].second];
        if(time > b[i].first) {
            ans = false;
            break;
        }
    }

    cout << (ans ? "Yes" : "No") << endl;

    return 0;
}