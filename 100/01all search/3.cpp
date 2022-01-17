// ABC122 B
#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
    string s;
    cin >> s;

    int ans = 0;
    int c = 0;
    for(int i = 0; i < (int)s.length(); i++) {
        if(s[i] == 'A' ||s[i] == 'C' ||s[i] == 'G' ||s[i] == 'T' ) {
            c++;
            ans = max(ans, c);
        } else {
            c = 0;
        }
    }
    cout << ans << endl;

    return 0;
}