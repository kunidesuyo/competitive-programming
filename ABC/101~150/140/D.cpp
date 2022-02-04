#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    vector<int> c;
    int num = 1;
    for(int i = 1; i < n; i++) {
        if(s[i] != s[i-1]) {
            c.push_back(num);
            num = 1;
        } else {
            num++;
        }
        if(i == n-1) c.push_back(num);
    }

    int v = 0;
    for(int i = 0; i < n; i++) {
        int di;
        if(s[i] == 'L') di = -1;
        else di = 1;
        int mae = i + di;
        if(0 <= mae && mae < n) {
            if(s[i] == s[mae]) {
                v++;
            }
        } 
    }
    if(v == n-1) {
        cout << v << endl;
        return 0;
    }
    /*for(auto x : c) {
        cout << x << endl;
    }*/
    int ck = c.size();

    //cout << v << endl;
    int v1 = v;
    for(int i = 0; i < k && 2*i < ck; i++) {
        if(2*i == 0 || 2*i == ck-1) {
            v1++;
        } else {
            v1 += 2;
        }
    }
    int v2 = v;
    for(int i = 0; i < k && 2*i+1 < ck; i++) {
        if(2*i+1 == 0 || 2*i+1 == ck-1) {
            v2++;
        } else {
            v2 += 2;
        }
    }

    cout << max(v1, v2) << endl;

    return 0;
}