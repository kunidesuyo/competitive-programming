#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int main() {
    int x, y, a, b, c;
    cin >> x >> y >> a >> b >> c;
    int p[a], q[b], r[c];
    for(int i = 0; i < a; i++) cin >> p[i];
    for(int i = 0; i < b; i++) cin >> q[i];
    for(int i = 0; i < c; i++) cin >> r[i];

    sort(p, p+a, greater<int>());
    sort(q, q+b, greater<int>());
    sort(r, r+c, greater<int>());

    priority_queue<int, vector<int>, greater<int>> pq;

    for(int i = 0; i < x; i++) {
        pq.push(p[i]);
    }
    for(int i = 0; i < y; i++) {
        pq.push(q[i]);
    }

    int i_r = 0;
    while(i_r < c) {
        int num = pq.top();
        if(r[i_r] > num) {
            pq.pop();
            pq.push(r[i_r]);
            i_r++;
        } else {
            break;
        }
    }

    ll ans = 0;
    while(!pq.empty()) {
        ans += pq.top();
        pq.pop();
    }
    cout << ans << endl;

 
    return 0;
}