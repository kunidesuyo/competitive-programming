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
    vector<int> a(n+1, 0);
    for(int i = 0; i < 4*n-1; i++) {
        int b;
        cin >> b;
        a[b]++;
    }

    for(int i = 1; i <= n; i++) {
        if(a[i] == 3) {
            cout << i << endl;
        }
    }

    return 0;
}