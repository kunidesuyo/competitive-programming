#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
    ll n, x;
    cin >> n >> x;
    string s;
    cin >> s;

    stack<char> t;
    for(int i = 0; i < n; i++) {
        if(s[i] == 'U') {
            if(t.empty() || t.top() == 'U') {
                t.push(s[i]);
            } else {
                t.pop();
            }
        } else {
            t.push(s[i]);
        }
    }
    vector<char> q;
    while(!t.empty()) {
        q.push_back(t.top());
        t.pop();
    }
    reverse(all(q));

    for(ll i = 0; i < q.size(); i++) {
        if(q[i] == 'L') {
            x = 2*x;
        } else if(q[i] == 'R') {
            x = 2*x + 1LL;
        } else if(q[i] == 'U'){
            x /= 2;
        }
    }
    cout << x << endl;

    return 0;
}