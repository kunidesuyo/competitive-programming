#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n+1, 0);
    for(int i = 0; i < n; i++) {
        int b;
        cin >> b;
        a[b]++;
    }

    bool ans = true;
    for(int i = 1; i <= n; i++) {
        if(a[i] != 1) {
            ans = false;
            break;
        }
    }
    if(ans) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}