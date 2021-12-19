#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x),end()

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int main() {
    int h, w, n;
    cin >> h >> w >> n;
    int a[n];
    int b[n];
    for(int i = 0; i < n; i++) cin >> a[i] >> b[i];

    vector<int> aa;
    vector<int> bb;

    for(int i = 0; i < n; i++) {
        aa.push_back(a[i]);
        bb.push_back(b[i]);
    }

    sort(aa.begin(), aa.end());
    sort(bb.begin(), bb.end());


    aa.erase(unique(aa.begin(), aa.end()), aa.end());
    bb.erase(unique(bb.begin(), bb.end()), bb.end());

    for(int i = 0; i < n; i++) {
        int x = lower_bound(aa.begin(), aa.end(), a[i]) - aa.begin();
        int y = lower_bound(bb.begin(), bb.end(), b[i]) - bb.begin();
        cout << x+1 << " " << y+1 << endl;
    }


    return 0;
}