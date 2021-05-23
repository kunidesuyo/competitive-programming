#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n;
    cin >> n;
    string s[n];
    for(int i = 0; i < n; i++) cin >> s[i];

    set<string> on, off;

    for(int i = 0; i < n; i++) {
        if(s[i][0] == '!') {
            int x = s[i].size();
            //cout << s[i].substr(1) << endl;
            on.insert(s[i].substr(1));
        } else {
            off.insert(s[i]);
        }
    }

    /*for(auto itr = off.begin(); itr != off.end(); itr++) {
        cout << *itr << endl;
    }
    for(auto itr = on.begin(); itr != on.end(); itr++) {
        cout << *itr << endl;
    }*/


    for(auto itr = off.begin(); itr != off.end(); itr++) {
        if(on.count(*itr) > 0) {
            cout << *itr << endl;
            return 0;
        }
    }

    cout << "satisfiable" << endl;

    return 0;
}