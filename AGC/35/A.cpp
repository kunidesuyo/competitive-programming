#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

/*bool xor_zero(int val[3]) {
    int big = 0;
    for(int i = 0; i < 3; i++) {
        big = max(big, val[i]);
    }
    int n = 0;
    while(true) {
        big /= 2;
        n++;
        if(big == 0) break;
    }

    int val2[3][n];
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < n; j++) {
            val2[i][j] = val[i] % 2;
            val[i] /= 2;
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < 3; j++) {
            
        }
    }

    return true;
}
*/

int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    int cnt = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] == 0) cnt++;
    }
    if(cnt == n) {
        cout << "Yes" << endl;
        return 0;
    }

    bool flag = false;
    if(n % 3 == 0) {
        int val[3] = {0, 0, 0};
        int nozero = 0;
        int j = 0;
        for(int i = 0; i < n; i++) {
            if(a[i] != 0) {
                bool f = true;
                for(int k = 0; k < 3; k++) {
                    if(val[k] == a[i]) f = false;
                }
                if(f) {
                    nozero++;
                    if(j < 3) val[j] = a[i];
                    j++;
                }
            }
        }
        if(nozero == 1 && cnt == n / 3) {
            flag = true;
        } else if(nozero == 3) {
            vector<int> c(3);
            for(int i = 0; i < n; i++) {
                for(int k = 0; k < 3; k++) {
                    if(a[i] == val[k]) {
                        c[k]++;
                    }
                }
            }
            if(c[0] == n/3 && c[1] == n/3 && c[2] == n/3) {
                int hoge = val[0] ^ val[1] ^ val[2];
                //cout << hoge << endl;
                if(hoge == 0) flag = true;
            }
        }
    }

    if(flag) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    

    return 0;
}