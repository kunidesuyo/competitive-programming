#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int ans = 0;

    for(int i = 1; i <= n-1; i++) {
        string s1, s2;
        s1 = s.substr(0, i);
        s2 = s.substr(i, n-i);
        set<char> s1set;
        for(int i = 0; i < s1.length(); i++) {
            s1set.insert(s1[i]);
        }
        int num = 0;
        auto itr = s1set.begin();
        while(itr != s1set.end()) {
            for(int k = 0; k < s2.length(); k++) {
                if((*itr) == s2[k]) {
                    num++;
                    break;
                }
            }
            itr++;
        }
        /*cout << s1 << " " << s2 << endl;
        cout << num << endl;*/
        ans = max(ans, num);
    }

    cout << ans << endl;

    return 0;
}