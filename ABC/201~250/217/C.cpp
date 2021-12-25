#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int main() {
    int n;
    cin >> n;
    pair<int, int> p[n];
    for(int i = 0; i < n; i++) {
        cin >> p[i].first;
        p[i].first--;
        p[i].second = i + 1;
    }

    sort(p, p+n);

    for(int i = 0; i < n; i++) {
        cout << p[i].second << " ";
    }
    cout << "\n";


    return 0;
}