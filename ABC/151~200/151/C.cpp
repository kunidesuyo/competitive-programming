#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int p[m];
    string s[m];
    for(int i = 0; i < m; i++) cin >> p[i] >> s[i];

    int ac[n];
    for(int i = 0; i < n; i++) ac[i] = 0;

    int wa = 0;

    for(int i = 0; i < m; i++) {
        if(s[i] == "AC") {
            if(ac[p[i] - 1] >= 0) {
                wa += ac[p[i] - 1];
                ac[p[i] - 1] = -1;
            }
        } else {
            if(ac[p[i] - 1] >= 0) {
                ac[p[i] - 1]++;
            }
        }
    }

    int num_ac = 0;
    for(int i = 0; i < n; i++) {
        if(ac[i] == -1) {
            num_ac++;
        }
    }
    

    cout << num_ac << " " << wa << endl;

    return 0;
}