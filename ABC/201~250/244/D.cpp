#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
    char s[3], t[3];
    for(int i = 0; i < 3; i++) cin >> s[i];
    for(int i = 0; i < 3; i++) cin >> t[i];

    int same = 0;
    for(int i = 0; i < 3; i++) {
        if(s[i] == t[i]) same++;
    }
    if(same == 1) {
        cout << "No" << endl;
    } else {
        cout << "Yes" << endl;
    }

    return 0;
}