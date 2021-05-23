#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.length();
    vector<int> m(26);
    for(int i = 0; i < n; i++) {
        m[s[i] - 'a']++;
    }

    int flag = -1;

    for(int i = 0; i < 26; i++) {
        if(m[i] == 0) {
            flag = i;
            break;
        }
    }

    if(flag != -1) {
        char t = 'a' + flag;
        cout << s << t << endl;
        return 0;
    }

    int ans_val = -1, ans_index = -1;

    for(int i = n-1; i >= 0; i--) {
        int val = s[i] - 'a';
        //cout << val << endl;
        for(int j = val+1; j < 26; j++) {
            if(m[j] == 0) {
                ans_val = j;
                ans_index = i;
                break;
            }
        }
        m[val]--;
        if(ans_val != -1 && ans_index != -1) break;
    }

    //cout << ans_val << " " << ans_index << endl;

    if(ans_val == -1 && ans_index == -1) {
        cout << -1 << endl;
        return 0;
    }


    s[ans_index] = 'a' + ans_val;
    s.erase(s.begin() + ans_index + 1, s.end());

    cout << s << endl;

    return 0;
}