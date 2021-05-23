#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    string s;
    cin >> s;

    string rs;

    for(int i = 0; i < s.length(); i++) {
        rs.push_back(s[s.length() - i - 1]);
    }

    int ans = 1;

    if(rs != s) {
        ans = 0;
    }

    string s2, rs2;

    for(int i = 0; i < (s.length() - 1) / 2; i++) {
        s2 += s[i];
    }

    for(int i = 0; i < (s.length() - 1) / 2; i++) {
        rs2 += s2[s2.length() - i - 1];
    }

    if(rs2 != s2) {
        ans = 0;
    }

    string s3, rs3;
    int n = s.length();

    for(int i = (n + 3) / 2 - 1; i < n; i++) {
        s3 += s[i];
    }

    for(int i = 0; i < n - (n + 3) / 2 + 1; i++) {
        rs3 += s3[s3.length() - i - 1];
    }

    if(rs3 != s3) {
        ans = 0;
    }

    if(ans == 1) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }



    return 0;
}