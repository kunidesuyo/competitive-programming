#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.length();

    vector<int> abc(3);
    for(int i = 0; i < n; i++) {
        if(s[i] == 'a') {
            abc[0]++;
        } else if(s[i] == 'b') {
            abc[1]++;
        } else {
            abc[2]++;
        }
    }

    bool ans = true;
    for(int i = 0; i < 3; i++) {
        if(abs(abc[i%3] - abc[(i+1)%3]) > 1) {
            ans = false;
        } 
    }

    cout << (ans ? "YES" : "NO") << endl;

    return 0;
}