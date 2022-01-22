#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
    int k;
    int n;
    cin >> n >> k;
    int d[k];
    for(int i = 0; i < k; i++) cin >> d[i];
    
    for(int i = n;;i++) {
        //cout << i << endl;
        string s = to_string(i);
        //cout << s << endl;
        bool ok = true;
        for(int j = 0; j < (int)s.length(); j++) {
            for(int l = 0; l < k; l++) {
                if(s[j] - '0' == d[l]) {
                    //cout << 1 << endl;
                    ok = false;
                    break;
                }
            }
            if(!ok) break;
        }
        if(ok) {
            cout << i << endl;
            return 0;
        }
    }



    return 0;
}