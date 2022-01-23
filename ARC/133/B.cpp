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
    int p[n], q[n];
    for(int i = 0; i < n; i++) cin >> p[i];
    for(int i = 0; i < n; i++) cin >> q[i];

    int pp[n+1];
    for(int i = 0; i < n; i++) {
        pp[p[i]] = i;
    }

    vector<pair<int, int>> pqid;
    for(int i = 0; i < n; i++) {
        int num = q[i];
        for(int j = 1; j * j <= num; j++) {
            if(num % j == 0) {
                int f = pp[j];
                int s = -i;
                pqid.push_back(make_pair(f, s));
                if(j * j != num) {
                    f = pp[num/j];
                    pqid.push_back(make_pair(f, s));
                }
            }
        }
    }

    sort(all(pqid));
    int s = pqid.size();
    int a[s];
    for(int i = 0; i < s; i++) {
        a[i] = -pqid[i].second;
        //cout << a[i] << endl;
    }

    vector<int> dp(s, inf);

    for(int i = 0; i < s; i++) {
        *lower_bound(all(dp), a[i]) = a[i];
    }


    int ans = lower_bound(all(dp), inf) - dp.begin();
    cout << ans << endl;
    /*vector<int> qq[n];

    int pp[n];
    for(int i = 0; i < n; i++) {
        pp[p[i]] = i;
    }

    for(int i = 0; i < n; i++) {
        int num = q[i];
        //cout << "num" << num << endl;
        for(int j = 1; j*j <= num; j++) {
            if(num % j == 0) {
                //cout << j << endl;
                int index = pp[j];
                cout << "j=" << j << "id=" << index << endl;
                qq[i].push_back(index);
                if(j*j != num) {
                    //cout << num/j << endl;
                    index = pp[num/j];
                    qq[i].push_back(index);
                }
            }
            sort(all(qq[i]));
        }
    }
    for(int i = 0; i < n; i++) {
        cout << "i = " << i << endl;
        for(auto y : qq[i]) {
            cout << y << endl;
        }
    }

    vector<int> dp(n, inf);
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < (int)qq[i].size(); j++) {
            int x = qq[i][j];
            //cout << x << endl;
            int index = lower_bound(all(dp), x) - dp.begin();
            /*cout << "ij" << i << "," << j << "id=" << index << endl;
            for(int k = 0; k < n; k++) {
                if(dp[k] == inf) cout << "INF ";
                else cout << dp[k] << " ";
            }
            cout << "\n";
            if(dp[index] == x) {
                continue;
            } else {
                dp[index] = x;
                break;
            }
        }
        cout << "i=" << i  << endl;
            for(int k = 0; k < n; k++) {
                if(dp[k] == inf) cout << "INF ";
                else cout << dp[k] << " ";
        }
        cout << "\n";
    }

    for(int j = 0; j < n; j++) {
                if(dp[j] == INF) cout << "INF ";
                cout << dp[j] << " ";
            }
            cout<< "\n";
 
    int ans = lower_bound(all(dp), inf) - dp.begin();
    cout << ans << endl;*/

    return 0;
}