#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int main() {
    string o, e;
    cin >> o >> e;
    
    int n = o.length();
    int m = e.length();

    for(int i = 0; i < min(n,m); i++) {
        cout << o[i] << e[i];
    }
    if(n > m) {
        cout << o[n-1];
    } else if (n < m) {
        cout << e[n-1];
    }
    cout << "\n";

    return 0;
}