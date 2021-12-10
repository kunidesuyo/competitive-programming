#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    if(0 < a && b == 0) {
        cout << "Gold" << endl;
        return 0;
    }
    if(a == 0 && 0 < b) {
        cout << "Silver" << endl;
        return 0;

    }
    if(0 < a && 0 < b) {
        cout << "Alloy" << endl;
    }

    return 0;
}