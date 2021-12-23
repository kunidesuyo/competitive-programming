#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int main() {
    int n;
    cin >> n;
    string s[n], t[n];
    for(int i = 0; i < n; i++) {
        cin >> s[i] >> t[i];
    }

    bool ans = false;
    for(int i = 0; i < n-1; i++) {
        for(int j = i+1; j < n; j++) {
            if(s[i] == s[j] && t[i] == t[j]) {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;


    return 0;
}