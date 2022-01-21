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
    int n = s.length();

    int ans = 0;
    for(int bit = 0; bit < 1<<n; bit++) {
        //priority_queue<int, vector<int>, greater<int>()> p, q;
        //cout << bit << endl;
        vector<int> p, q;
        for(int i = 0; i < n; i++) {
            int num = s[i] - '0';
            if(!(bit & 1<<i)) {
                p.push_back(num);
            } else {
                q.push_back(num);
            }
        }
        if(p.size() == 0 || q.size() == 0) continue;
        sort(all(p));
        sort(all(q));
        if(p[p.size()-1] == 0 || q[q.size()-1] == 0) continue;
        int nump = 0;
        int numq = 0;
        int v = 1;
        for(auto x : p) {
            nump += x * v;
            v *= 10;
        }
        v = 1;
        for(auto x : q) {
            numq += x * v;
            v *= 10;
        }
        //cout << nump << endl;
        //cout << numq << endl;
        ans = max(ans, nump * numq);
    }
    cout << ans << endl;

    return 0;
}