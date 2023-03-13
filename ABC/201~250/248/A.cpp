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

    vector<bool> a(10, false);
    for(int i = 0; i < 9; i++) {
        a[s[i]-'0'] = true;
    }

    for(int i = 0; i <10; i++) {
        if(a[i] == false) {
            cout << i << endl;
            return 0;
        }
    }
    

    return 0;
}