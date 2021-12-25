#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int main() {
    string s[3];
    for(int i = 0; i < 3; i++) cin >> s[i];

    vector<int> ans(4, 0);
    for(int i = 0; i < 3; i++) {
        if(s[i] == "ABC") {
            ans[0] = 1;
        } else if(s[i] == "ARC") {
            ans[1] = 1;
        } else if(s[i] == "AGC") {
            ans[2] = 1;
        } else {
            ans[3] = 1;
        }
    }
    for(int i = 0; i < 4; i++) {
        if(ans[i] == 0) {
            if(i == 0) {
                cout << "ABC" << endl;
            } else if(i == 1) {
                cout << "ARC" << endl;
            } else if(i == 2) {
                cout << "AGC" << endl;
            } else {
                cout << "AHC" << endl;
            }
        }
    }

    return 0;
}