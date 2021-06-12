#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

template<class T> inline bool chmin(T& a, T b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
    }
template<class T> inline bool chmax(T& a, T b) {
    if (a < b) {
        a = b;
        return true;
    }
    return false;
}

int maximum_same(vector<int> r) {
    map<int, int> m;
    int val = 0;
    for(int i = 0; i < r.size(); i++) {
        m[r[i]]++;
        val = max(val, m[r[i]]);
    }
    return val;
}

int main() {
    int h, w;
    cin >> h >> w;
    int p[h][w];
    for(int i = 0; i < h; i++) {
        for(int j = 0; j < w; j++) cin >> p[i][j];
    }

    int ans = 0;
    for(int bit = 1; bit < (1<<h); bit++) {
        vector<int> r;
        for(int j = 0; j < w; j++) {
            int idx = -1; bool flag = false;
            for(int k = 0; k < h; k++) {
                if((bit & (1<<k)) == 0) continue;
                if(idx == -1) idx = p[k][j];
                else if (idx != p[k][j]) flag = true;
            }
            if(flag == false) r.push_back(idx);
        }

        int cnt_h = 0, cnt_w = maximum_same(r);
        for(int j = 0; j < h; j++) {
            if((bit & (1 << j)) != 0) cnt_h++;
        }
        ans = max(ans, cnt_h * cnt_w);
    }

    cout << ans << endl;

    return 0;
}