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
    string s[n], t[n];
    for(int i = 0; i < n; i++) cin >> s[i] >> t[i];

    for(int i = 0; i < n; i++) {
        bool ok1 = true;
        for(int j = 0; j < n; j++) {
            if(i != j) {
                if(s[i] == s[j] || s[i] == t[j]) {
                    ok1 = false;
                }
            }
        }
        bool ok2 = true;
        for(int j = 0; j < n; j++) {
            if(i != j) {
                if(t[i] == s[j] || t[i] == t[j]) {
                    ok2 = false;
                }
            }
        }
        if(ok1 == false && ok2 == false) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;

    return 0;
}