#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

int main() {
    string s;
    cin >> s;
    vector<int> a(26, 0);

    for(int i = 0; i < s.length(); i++) {
        int num = s[i] - 'a';
        a[num]++;
    }

    for(int i = 0; i < 26; i++) {
        if(a[i] == 0) {
            char c = 'a' + i;
            cout << c << endl;
            return 0;
        }
    }
    cout << "None" << endl;

    return 0;
}