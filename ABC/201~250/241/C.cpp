#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
    int n;
    cin >> n;
    string s[n];
    for(int i = 0; i < n; i++) cin >> s[i];

    
    //yoko
    for(int i = 0; i < n; i++) {
        int kuro = 0;
        int group = 0;
        for(int j = 0; j < n; j++) {
            group++;
            if(group > 6) {
                if(s[i][j] == '#') {
                    kuro++;
                }
                if(s[i][j-6] == '#') {
                    kuro--;
                }
            } else {
                if(s[i][j] == '#') {
                    kuro++;
                }
            }
            if(kuro >= 4) {
                //cout << "yoko" << endl;
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    //tate
    for(int i = 0; i < n; i++) {
        int kuro = 0;
        int group = 0;
        for(int j = 0; j < n; j++) {
            group++;
            if(group > 6) {
                if(s[j][i] == '#') {
                    kuro++;
                }
                if(s[j-6][i] == '#') {
                    kuro--;
                }
            } else {
                if(s[j][i] == '#') {
                    kuro++;
                }
            }
            if(kuro >= 4) {
                //cout << "tate" << endl;
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    //naname
    //migistai + +
    //upper start
    for(int i = 0; i < n; i++) { //s[0][i]
        int kuro = 0;
        int group = 0;
        for(int j = 0; j < n; j++) {
            group++;
            //s[0+j][i+j]
            if(0+j >= n || i+j >= n) break;
            if(group > 6) {
                if(s[0+j][i+j] == '#') {
                    kuro++;
                }
                if(s[0+j-6][i+j-6] == '#') {
                    kuro--;
                }
            } else {
                if(s[0+j][i+j] == '#') {
                    kuro++;
                }
            }
            if(kuro >= 4 && group >= 6) {
                //cout << "ue migisita" << endl;
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    //left start
    for(int i = 0; i < n; i++) { //s[i][0]
        for(int j = 0; j < n; j++) {
            int kuro = 0;       
            int group = 0;
            for(int j = 0; j < n; j++) { //+ +
                group++;
                if(0+j >= n || i+j >= n) break;
                if(group > 6) {
                    if(s[i+j][0+j] == '#') {
                        kuro++;
                    }
                    if(s[i+j-6][0+j-6] == '#') {
                        kuro--;
                    }
                } else {
                    if(s[i+j][0+j] == '#') {
                        kuro++;
                    }
                }
                if(kuro >= 4 && group >= 6) {
                    //cout << "hidari migisita" << endl;
                    cout << "Yes" << endl;
                    return 0;
                }
            }
        }
    }

    //hidarishita + -
    //upper start
    for(int i = 0; i < n; i++) { //s[0][i]
        int kuro = 0;       
        int group = 0;
        for(int j = 0; j < n; j++) { //+ -
            group++;
            if(0+j >= n || i - j < 0) break;
            if(group > 6) {
                if(s[0+j][i-j] == '#') {
                    kuro++;
                }
                if(s[0+j-6][i-j+6] == '#') {
                    kuro--;
                }
            } else {
                if(s[0+j][i-j] == '#') {
                    kuro++;
                }
            }
            if(kuro >= 4 && group >= 6) {
                //cout << "ue hidarisita" << endl;
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    //right start
    for(int i = 0; i < n; i++) { //s[i][n-1]
        int kuro = 0;       
        int group = 0;
        for(int j = 0; j < n; j++) { //+ -
            group++;
            if(i+j >= n || (n-1)-j < 0) break;
            if(group > 6) {
                if(s[i+j][(n-1)-j] == '#') {
                    kuro++;
                }
                if(s[i+j-6][(n-1)-j+6] == '#') {
                    kuro--;
                }
            } else {
                if(s[i+j][(n-1)-j] == '#') {
                    kuro++;
                }
            }
            if(kuro >= 4 && group >= 6) {
                //cout << "migi hidarisita" << endl;
                cout << "Yes" << endl;
                return 0;
            }
        }
    }

    cout << "No" << endl;
    return 0;
}