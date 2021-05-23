#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> b(n);
    for(int i = 0; i < n; i++) {
        cin >> b[i];
    }

    /*for(int i = 0; i < b.size(); i++) {
        cout << b[i];
    }
    cout << "\n";

    b.erase(b.begin());

    
    for(int i = 0; i < b.size(); i++) {
        cout << b[i];
    }
    cout << "\n";*/

    vector<int> ans;

    for(int i = 0; i < n; i++) {
        int index = -1;
        int biggest = 0;
        for(int j = 0; j < b.size(); j++) {
            if(j+1 == b[j]) {
                if(biggest < b[j]) {
                    index = j;
                    biggest = b[j];
                }
            }
        }
        if(index == -1) {
            cout << -1 << endl;
            return 0;
        }
        b.erase(b.begin() + index);
        ans.push_back(biggest);
    }
    reverse(ans.begin(), ans.end());

    for(int i = 0; i < ans.size(); i++) {
        cout << ans[i] << endl;
    }

    return 0;
}