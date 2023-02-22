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
    set<int> a;
    for(int i = 0; i < n; i++ ){
        int t;
        cin >> t;
        a.insert(t);
    }

    cout << a.size() << endl;

    return 0;
}