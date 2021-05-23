#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n, m, q;
    cin >> n >> m >> q;
    pair<int, int> vw[n];
    for(int i = 0; i < n; i++) cin >> vw[i].second >> vw[i].first;
    pair<int, int> x[m];
    for(int i = 0; i < m; i++) {
        cin >> x[i].first;
        x[i].second = i;
    }
    int query[q][2];
    for(int i = 0; i < q; i++) {
        cin >> query[i][0] >> query[i][1];
        query[i][0]--;
        query[i][1]--;
    }

    sort(vw, vw+n);
    sort(x, x+m);

    /*cout << "\n";
    for(int i = 0; i < n; i++) {
        cout << vw[i].first << " " << vw[i].second << endl;
    }
    cout << "\n";
    for(int i = 0; i < m; i++) {
        cout << x[i].first << " " << x[i].second << endl;
    }
    cout << "\n";*/

    

    for(int qu = 0; qu < q; qu++) {
        int ans = 0;
        vector<bool> box(m, false);
        for(int i = 0; i < m; i++) {
            if(query[qu][0] <= x[i].second && x[i].second <= query[qu][1]) {
                box[i] = true;
            } 
        }
        /*cout << qu << endl;
        for(int i = 0; i < m; i++) {
            cout << box[i] << endl;
        }
        cout << "\n";*/
        
        for(int i = n-1; i >= 0; i--) {
            for(int j = 0; j < m; j++) {
                if(box[j] == false && x[j].first >= vw[i].second) {
                    box[j] = true;
                    /*cout << i << " " << j << endl;
                    cout << vw[i].first << endl;*/
                    ans += vw[i].first;
                    //cout << ans << endl;
                    break;
                }
            }
        }
        cout << ans << endl;
        //cout << "\n";

    }

    return 0;
}