#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    string x;
    cin >> x;

    int n = x.length();
    if(n == 1) {
        cout << x << endl;
        return 0;
    }
    int index = n;

    for(int i = 0; i < n; i++) {
        if(x[i] == '.') {
            index = i;
            break;
        }
    }

    for(int i = 0; i < index; i++) {
        cout << x[i];
    }

    cout << "\n";

    return 0;
}