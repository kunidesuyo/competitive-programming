#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> p(n);

    for(int i = 0; i < n; i++) {
        cin >> p[i].first;
        cin >> p[i].second;
    }

    double ans = 0;
    for(int i = 0; i < n-1; i++) {
        for(int j = i+1; j < n; j++) {
            double l = pow((p[i].first-p[j].first), 2);
            l += pow((p[i].second-p[j].second), 2);
            l = sqrt(l);
            ans = max(ans, l);
        }
    }
    cout.precision(11);
    cout << ans << endl;

    return 0;
}