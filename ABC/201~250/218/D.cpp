#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<pair<int, int>> xy(n);
    for(int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        xy[i].first = x;
        xy[i].second = y;
    }

    sort(all(xy));

    //cout << binary_search(all(xy), make_pair(1, 0)) << endl;
    /*for(auto z : xy) {
        cout << "(" << z.first << "," << z.second << ")" << endl;
    }*/

    int ans = 0;
    for(int i = 0; i < n-1; i++) {
        for(int j = i+1; j < n; j++) {
            //cout << i << j << endl;
            if(xy[i].first < xy[j].first && xy[i].second < xy[j].second) {
                /*cout << i << " " << j << " ";
                cout << "(" << xy[i].first << "," << xy[i].second << ")";
                cout << ", (" << xy[j].first << "," << xy[j].second << ")" << endl;
                */
                if(binary_search(all(xy), make_pair(xy[i].first, xy[j].second))
                && binary_search(all(xy), make_pair(xy[j].first, xy[i].second))) {
                    ans++;
                }
            }
        }
    }

    cout << ans << endl;

    return 0;
}