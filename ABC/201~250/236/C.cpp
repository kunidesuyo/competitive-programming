#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<string> s, t;
    for(int i = 0; i < n; i++) {
        string x;
        cin >> x;
        s.push_back(x);
    }
    for(int i = 0; i < m; i++) {
        string x;
        cin >> x;
        t.push_back(x);
    }
    sort(all(t));

    for(int i = 0; i < n; i++) {
        //cout << s[i] << endl;
        int itr = lower_bound(all(t), s[i]) - t.begin();
        if(t[itr] == s[i]) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}