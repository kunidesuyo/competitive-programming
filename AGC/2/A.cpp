#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    if(a > 0) {
        cout << "Positive" << endl;
    } else {
        if(b >= 0) {
            cout << "Zero" << endl;
        } else {
            int x = b - a + 1;
            if(x % 2 == 0) {
                cout << "Positive" << endl;
            } else {
                cout << "Negative" << endl;
            }
        }
    }

    return 0;
}