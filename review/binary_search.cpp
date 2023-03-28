#include <bits/stdc++.h>
#include <cmath>

using namespace std;


int main() {
    vector<int> d;
    int d_max;
    cin >> d_max;
    d.push_back(d_max);
    d.push_back(0);
    int n;
    cin >> n;
    int m;
    cin >> m;
    for(int i = 1; i < n; i++) {
        int x;
        cin >> x;
        d.push_back(x);
    }
    int k[m];
    for(int i = 0; i < m; i++) cin >> k[i];

    sort(d.begin(), d.end());

    int ans = 0;

    for(int i = 0; i < m; i++) {
        int left = -1;
        int right = d.size();

        while(right - left > 1) {
            int mid = (left + right) / 2;
            if(k[i] <= d[mid]) {
                right = mid;
            } else {
                left = mid;
            }
        }
        // cout << left << " " << right << endl;
        ans += min(abs(k[i] - d[left]), abs(k[i] - d[right]));
        // cout << add << endl;
    }

    cout << ans << endl;


    return 0;
}