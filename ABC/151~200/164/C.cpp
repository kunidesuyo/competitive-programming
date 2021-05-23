#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n;
    cin >> n;
    string s[n];
    for(int i = 0; i < n; i++) cin >> s[i];

   

    set<string> Set;
    for(int i = 0; i < n; i++) {
        Set.insert(s[i]);
    }

 

    cout << Set.size() << endl;



    return 0;
}