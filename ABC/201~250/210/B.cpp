#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    for(int i = 0; i < n; i++) {
        if(s[i] == '1') {
            if(i% 2 == 0) {
                cout << "Takahashi" << endl;
            } else {
                cout << "Aoki" << endl;
            }
            break;
        }
    }

    return 0;
}