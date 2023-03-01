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
    string t;
    cin >> t;

    vector<pair<int, int>> d;
    d.push_back(make_pair(1, 0));
    d.push_back(make_pair(0, -1));
    d.push_back(make_pair(-1, 0));
    d.push_back(make_pair(0, 1));
    pair<int, int> ans = make_pair(0, 0);
    int now = 0;
    for(int i = 0; i < n; i++) {
        if(t[i] == 'S') {
            ans.first += d[now].first * 1;
            ans.second += d[now].second * 1;
        } else {
            now++;
            now %= 4;
        }
    }

    cout << ans.first << " " << ans.second << endl;



    return 0;
}