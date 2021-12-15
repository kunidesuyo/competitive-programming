#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int main() {
    string s;
    cin >> s;
    int c[2] = {0, 0};
    int n = s.length();
    for(int i = 0; i < n; i++) {
        int x = s[i] - '0';
        c[x]++;
    }

    cout << 2 * min(c[0], c[1]) << endl;

    return 0;
}