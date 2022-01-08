#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;

using namespace std;

string s[210], t[210];


int main() {
    int n;
    cin >> n;
    string s[n], t[n];
    for(int i = 0; i < n; i++) cin >> s[i];
    for(int i = 0; i < n; i++) cin >> t[i];

    int upper, lower, left, right; 
    upper = 0;
    for(int i = 0; i < n; i++) {
        bool ok = true;
        for(int j = 0; j < n; j++) {
            if(s[i][j] == '#') {
                ok = false;
                break;
            }
        }
        if(ok) {
            upper++;
        } else {
            break;
        }
    }
    lower = n-1;
    for(int i = n-1; i >= 0; i--) {
        bool ok = true;
        for(int j = 0; j < n; j++) {
            if(s[i][j] == '#') {
                ok = false;
                break;
            }
        }
        if(ok) {
            lower--;
        } else {
            break;
        }
    }
    left = 0;
    for(int i = 0; i < n; i++) {
        bool ok = true;
        for(int j = 0; j < n; j++) {
            if(s[j][i] == '#') {
                ok = false;
                break;
            }
        }
        if(ok) {
            left++;
        } else {
            break;
        }
    }
    right = n-1;
    for(int i = n-1; i >= 0; i--) {
        bool ok = true;
        for(int j = 0; j < n; j++) {
            if(s[j][i] == '#') {
                ok = false;
                break;
            }
        }
        if(ok) {
            right--;
        } else {
            break;
        }
    }

    int tate_s = lower - upper + 1;
    int yoko_s = right - left + 1;
    int cutted_s[tate_s][yoko_s];
    for(int i = 0; i < tate_s; i++) {
        for(int j = 0; j < yoko_s; j++) {
            if(s[upper+i][left+j] == '#') {
                cutted_s[i][j] = 1;
            } else {
                cutted_s[i][j] = 0;
            }
        }
    }

    //t

    upper = 0;
    for(int i = 0; i < n; i++) {
        bool ok = true;
        for(int j = 0; j < n; j++) {
            if(t[i][j] == '#') {
                ok = false;
                break;
            }
        }
        if(ok) {
            upper++;
        } else {
            break;
        }
    }
    lower = n-1;
    for(int i = n-1; i >= 0; i--) {
        bool ok = true;
        for(int j = 0; j < n; j++) {
            if(t[i][j] == '#') {
                ok = false;
                break;
            }
        }
        if(ok) {
            lower--;
        } else {
            break;
        }
    }
    left = 0;
    for(int i = 0; i < n; i++) {
        bool ok = true;
        for(int j = 0; j < n; j++) {
            if(t[j][i] == '#') {
                ok = false;
                break;
            }
        }
        if(ok) {
            left++;
        } else {
            break;
        }
    }
    right = n-1;
    for(int i = n-1; i >= 0; i--) {
        bool ok = true;
        for(int j = 0; j < n; j++) {
            if(t[j][i] == '#') {
                ok = false;
                break;
            }
        }
        if(ok) {
            right--;
        } else {
            break;
        }
    }

    int tate_t = lower - upper + 1;
    int yoko_t = right - left + 1;
    int cutted_t[tate_t][yoko_t];
    for(int i = 0; i < tate_t; i++) {
        for(int j = 0; j < yoko_t; j++) {
            if(t[upper+i][left+j] == '#') {
                cutted_t[i][j] = 1;
            } else {
                cutted_t[i][j] = 0;
            }
        }
    }

    /*for(int i = 0; i < tate_s; i++) {
        for(int j = 0; j < yoko_s; j++) {
            cout << cutted_s[i][j];
        }
        cout << "\n";
    }

    for(int i = 0; i < tate_t; i++) {
        for(int j = 0; j < yoko_t; j++) {
            cout << cutted_t[i][j];
        }
        cout << "\n";
    }*/


    if(tate_t == tate_s && yoko_t == yoko_s) {
        //0
        bool ok = true;
        for(int i = 0; i < tate_s; i++) {
            for(int j = 0; j < yoko_s; j++) {
                if(cutted_s[i][j] != cutted_t[i][j]) {
                    ok = false;
                    break;
                }
            }
            if(!ok) break;
        }
        if(ok) {
            cout << "Yes" << endl;
            return 0;
        }
        //180
        ok = true;
        for(int i = 0; i < tate_s; i++) {
            for(int j = 0; j < yoko_s; j++) {
                if(cutted_s[i][j] != cutted_t[tate_t-1-i][yoko_t-1-j]) {
                    ok = false;
                    break;
                }
            }
            if(!ok) break;
        }
        if(ok) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    if(tate_t == yoko_s && yoko_t == tate_s) {
        // 90, 270
        bool ok = true;
        for(int i = 0; i < tate_s; i++) {
            for(int j = 0; j < yoko_s; j++) {
                if(cutted_s[i][j] != cutted_t[tate_t-1-j][i]) {
                    ok = false;
                    break;
                }
            }
            if(!ok) break;
        }
        if(ok) {
            cout << "Yes" << endl;
            return 0;
        }
        ok = true;
        for(int i = 0; i < tate_s; i++) {
            for(int j = 0; j < yoko_s; j++) {
                if(cutted_s[i][j] != cutted_t[j][yoko_t-1-i]) {
                    ok = false;
                    break;
                }
            }
            if(!ok) break;
        }
        if(ok) {
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;




    return 0;
}