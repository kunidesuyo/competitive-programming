#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int main() {
    int p[26];
    for(int i = 0; i < 26; i++) {
        cin >> p[i];
    }
    string ans;

    for(int i = 0; i < 26; i++) {
        char x = 'a' + p[i] - 1;
        ans.push_back(x);
    }

    cout << ans << endl;


    return 0;
}