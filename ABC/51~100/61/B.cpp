#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> x(n);
    for(int i = 0; i < m; i++) {
        int s,t;
        cin >> s >> t;
        s--;t--;
        x[s]++;x[t]++;
    }

    for(int i = 0; i < n; i++) cout << x[i] << endl;

    return 0;
}