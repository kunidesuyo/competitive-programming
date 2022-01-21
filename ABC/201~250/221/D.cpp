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
    int a[n], b[n];
    for(int i = 0 ; i < n; i++) {
        int x, y;
        cin >> x >> y;
        a[i] = x;
        b[i] = x + y;
    }

    //for(int i = 0; i < n; i++) cout << a[i] << " " << b[i] << endl;

    pair<int, int> ab[2*n];
    for(int i = 0; i < n; i++) {
        ab[i].first = a[i];
        ab[i].second = 1;
    }
    for(int i = 0; i < n; i++) {
        ab[n+i].first = b[i];
        ab[n+i].second = -1;
    }

    sort(ab, ab+2*n);
    /*for(auto x : ab) {
        cout << x.first << " " << x.second << endl;
    }*/

    vector<int> ans(n+1, 0);
    int p = 0;
    for(int i = 0; i < 2*n-1; i++) {
        p += ab[i].second;
        ans[p] += (ab[i+1].first - ab[i].first);
    }

    for(int i = 1; i <= n; i++) {
        if(i != 1) cout << " ";
        cout << ans[i];
    }
    cout << "\n";


    return 0;
}