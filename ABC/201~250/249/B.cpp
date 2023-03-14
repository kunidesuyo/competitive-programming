#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
    map<char, bool> x;
    for(int i = 0; i < 26; i++) {
        char key = 'a' + i;
        char key2 = 'A' + i;
        // cout << key << endl;
        // cout << key2 << endl;
        x[key] = false;
        x[key2] = false;
    }

    string s;
    cin >> s;
    for(int i = 0; i < s.length(); i++) {
        char key = s[i];
        if(x[key] == true) {
            cout << "No" << endl;
            return 0;
        }
        x[key] = true;
    }

    bool komoji = false;
    bool oomoji = false;
    for(int i = 0; i < 26; i++) {
        char key = 'a' + i;
        char key2 = 'A' + i;
        if(x[key] == true) {
            komoji = true;
        }
        if(x[key2] == true) {
            oomoji = true;
        }
    }

    if(komoji == true && oomoji == true) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }


    return 0;
}