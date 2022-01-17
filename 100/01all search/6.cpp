// mitsui 2019 D
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
    string s;
    cin >> s;

    int ans = 0;
    for(int i = 0; i <= 999; i++) {
        string x = to_string(i);
        while(x.length() != 3) {
            x = '0' + x;
        }
        int num = 0;
        for(int i = 0; i < n; i++) {
            if(s[i] == x[num]) {
                num++;
            }
            if(num == 3) break;
        }
        if(num == 3) ans++;
    }
    cout << ans << endl;

    return 0;
}