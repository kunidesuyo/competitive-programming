#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int n;
pair<int, int> t[110];
pair<int, int> s[110];

int main() {
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> s[i].first >> s[i].second;
    }
    for(int i = 0; i < n; i++) {
        cin >> t[i].first >> t[i].second;
    }

    for(int spin = 0; spin < 4; spin++) {
        if(spin != 0) {
            for(int k = 0; k < n; k++) {
                swap(s[k].first, s[k].second);
                s[k].second *= -1;
            }
        }
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                int dx = t[j].first - s[i].first;
                int dy = t[j].second - s[i].second;
                pair<int, int> ss[n];
                for(int k = 0; k < n; k++) {
                    ss[k].first = s[k].first;
                    ss[k].second = s[k].second;
                }
                for(int k = 0; k < n; k++) {
                    ss[k].first += dx;
                    ss[k].second += dy;
                }
                bool x = true;
                for(int l = 0; l < n; l++) {
                    bool y = false;
                    for(int m = 0; m < n; m++) {
                        if(ss[l].first == t[m].first && ss[l].second == t[m].second) {
                            y = true;
                            break;
                        }
                    }
                    if(!y) {
                        x = false;
                        break;
                    }
                }
                if(x) {
                    cout << "Yes" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "No" << endl;

    return 0;
}