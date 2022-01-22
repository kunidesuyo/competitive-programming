#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
    int n;
    cin >> n;

    int maxi = 1;
    for(int i = 0; i < n; i++) maxi *= n;

    
    vector<string> ans;

    for(int i = 0; i < maxi; i++) {
        int num = i;
        string s;
        while(num > 0) {
            int v = num % n;
            char vv = '0' + v;
            s = vv + s;
            num /= n;
        }
        while(s.length() < n) {
            s = '0' + s;
        }
        //cout << s << endl;
        vector<char> c(n, '+');
        char now = 'a';
        for(int j = 0; j < n; j++) {
            if(c[s[j] - '0'] == '+') {
                c[s[j] - '0'] = now;
                now++;
            }
        }
        string t;
        for(int j = 0; j < n; j++) {
            t = t + c[s[j]-'0'];
        }
        ans.push_back(t);
    }
    sort(all(ans));
    //for(auto x : ans) cout << x << endl;

    for(int i = 0; i < (int)ans.size(); i++) {
        if(i == 0) {
            cout << ans[i] << endl;
            continue;
        }
        if(ans[i] != ans[i-1]) {
            cout << ans[i] << endl;
        }
    }

    return 0;
}