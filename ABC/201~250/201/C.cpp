#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    string s;
    cin >> s;

    //int aru = 0, nai = 0, waka = 0;

    vector<int> aru, waka, nai;

    for(int i = 0; i < s.length(); i++) {
        if(s[i] == 'o') {
            aru.push_back(i);
        } else if(s[i] == 'x') {
            nai.push_back(i);
        } else {
            waka.push_back(i);
        }
    }

    if(aru.size() > 4) {
        cout << 0 << endl;
        return 0;
    }

    int ans = 0;
    

    for(int i = 0; i <= 9999; i++) {
        stringstream ss;
        ss << setw(4) << setfill('0') << i;
        string x = ss.str();
        bool ok = true;
        for(auto y : aru) {
            bool a = false;
            for(int i = 0; i < 4; i++) {
                if((int)(x[i]-'0') == y) a = true;
            }
            if(a == false) ok = false;
            if(ok == false) break;
        }
        bool ok2 = true;
        for(auto y : nai) {
            for(int i = 0; i < 4; i++) {
                if(int(x[i]-'0') == y) {
                    ok2 = false;
                    break;
                } 
            }
            if(ok2 == false) break;
        }
        if(ok == true && ok2 == true) ans++;
    }
    

    cout << ans << endl;





    return 0;
}