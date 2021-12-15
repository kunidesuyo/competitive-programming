#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int main() {
    string s;
    cin >> s;
    int a[4];
    for(int i = 0; i < 4; i++) a[i] = s[i] - '0';
    int op[2] = {-1, 1};

    int ans[3];
    for(int i = 0; i < 2; i++) {
        bool ok = false;
        for(int j = 0; j < 2; j++) {
            for(int k = 0; k < 2; k++) {
                if(a[0] + op[i]*a[1] + op[j]*a[2] + op[k]*a[3] == 7) {
                    ans[0] = i;
                    ans[1] = j;
                    ans[2] = k;
                    ok = true;
                }
                if(ok) break;
            }
            if(ok) break;
        }
        if(ok) break;
    }

    for(int i = 0; i < 4; i++) {
        if(i != 0) {
            if(ans[i-1] == 0) {
                cout << '-';
            } else {
                cout << '+';
            }
        }
        cout << a[i];
    }
    cout << "=7" << endl;

    return 0;
}