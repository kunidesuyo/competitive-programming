#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int main() {
    string x;
    cin >> x;
    int n;
    cin >> n;
    string s[n];
    for(int i = 0; i < n; i++) {
        cin >> s[i];
    }

    string t[n];
    for(int i = 0; i < n; i++) t[i] = s[i];

    for(int i = 0; i < 26; i++) {
        char a = 'a' + i;
        for(int j = 0; j < n; j++) {
            for(int k = 0; k < s[j].length(); k++) {
                if(s[j][k] == x[i]) {
                    t[j][k] = a;
                }
            }
        }
    }

    /*cout << "\n";
    for(auto ans : t) {
        cout << ans << endl;
    }
    cout << "\n";*/

    sort(t, t+n);

    /*for(auto ans : t) {
        cout << ans << endl;
    }*/

    string u[n];
    for(int i = 0; i < n; i++) u[i] = t[i];

    for(int i = 0; i < 26; i++) {
        char a = 'a' + i;
        for(int j = 0; j < n; j++) {
            for(int k = 0; k < t[j].length(); k++) {
                if(t[j][k] == a) u[j][k] = x[i];
            }
        }
    }

    for(auto ans : u) {
        cout << ans << endl;
    }



    return 0;
}