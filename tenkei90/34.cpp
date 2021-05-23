#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];

    map<int, int> m;

    int end = 0, cnt = 0;
    int ans = 0;
    for(int i = 0; i < n; i++) {
        while(end < n) {
            if(m[a[end]] == 0 && cnt == k) break;
            if(m[a[end]] == 0) cnt++;
            m[a[end]]++;
            end++;
        }
        ans = max(ans, end - i);
        if(m[a[i]] == 1) cnt--;
        m[a[i]]--;
    }

    cout << ans << endl;

    return 0;
}