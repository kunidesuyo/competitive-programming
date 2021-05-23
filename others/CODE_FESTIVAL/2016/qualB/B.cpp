#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n, a, b;
    cin >> n >> a >> b;
    string s;
    cin >> s;

    int tuka = 0;
    int kaigai = 1;

    for(int i = 0; i < n; i++) {
        if(s[i] == 'a') {
            if(tuka < a + b) {
                cout << "Yes" << endl;;
                tuka++;
            } else {
                cout << "No" << endl;
            }
        } else if(s[i] == 'b') {
            if(tuka < a+b && kaigai <= b) {
                cout << "Yes" << endl;
                tuka++;
                kaigai++;
            } else {
                cout << "No" << endl;
            }
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}