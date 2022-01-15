#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    int x[q], k[q];
    for(int i = 0; i <q; i++) cin >> x[i] >> k[i];


    map<int, vector<int>> m;
    
    for(int i = 0; i < n; i++) {
        m[a[i]].push_back(i+1);
    }

    for(int i = 0; i < q; i++) {
        if(m[x[i]].size() < k[i]) {
            cout << -1 << endl;
            continue;
        }
        cout << m[x[i]][k[i]-1] << endl;
    }

    return 0;
}