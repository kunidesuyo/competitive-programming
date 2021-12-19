#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int main() {
    int n;
    cin >> n;
    pair<int, int> a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i].first;
        a[i].second = i+1;
    }
    sort(a, a+n);

    cout << a[n-2].second << endl;

    return 0;
}