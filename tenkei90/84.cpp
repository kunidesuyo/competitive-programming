#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    vector<int> maru, batu;
    for(int i = 0; i < n; i++) {
        if(s[i] == 'o') {
            maru.push_back(i);
        } else {
            batu.push_back(i);
        }
    }

    
    ll ans = 0;
    for(int i = 0; i < n-1; i++) {
        int index;
        int r;
        if(s[i] == 'o') {
            index = (int)(lower_bound(batu.begin(), batu.end(), i) - batu.begin());
            if(index == batu.size()) continue;
            r = batu[index];
        } else {
            index = (int)(lower_bound(maru.begin(), maru.end(), i) - maru.begin());
            if(index == maru.size()) continue;
            r = maru[index];
        }
        //cout << index << endl;
        //cout << r << endl;
        ans += n - r;
    }

    cout << ans << endl;

    return 0;
}