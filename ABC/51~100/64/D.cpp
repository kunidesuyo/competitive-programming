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

    vector<int> bound;

    bound.push_back(-1);
    for(int i = 0; i < n-1; i++) {
        if(s[i] == ')' && s[i+1] == '(') {
            bound.push_back(i);
        }
    }
    bound.push_back(n-1);

    int add_l = 0;
    int add_r = 0;
    
    vector<pair<char, int>> lr;
    int index = 0;

    for(int i = 0; i < (int)bound.size()-1; i++) {
        int l = 0;
        int r = 0;
        int start = bound[i] + 1;
        int end = bound[i+1];
        for(int j = start; j <= end; j++) {
            if(s[j] == '(') {
                l++;
            } else {
                r++;
            }
        }
        int num = abs(l - r);
        if(l > r) {
            //add_r += num;
            lr.push_back(make_pair('l', num));
            index++;
        } else if(l < r) {
            //add_l += num;
            lr.push_back(make_pair('r', num));
            index++;
        }
    }


    for(int i = 0; i < index; i++) {
        if(lr[i].first == 'r') {
            int now_l = lr[i].second;
            for(int j = i-1; j >= 0; j--) {
                if(lr[j].first == 'l') {
                    if(lr[j].second >= now_l) {
                        lr[j].second -= now_l;
                        now_l = 0;
                    } else {
                        now_l -= lr[j].second;
                        lr[j].second = 0;
                    }
                }
                if(now_l == 0) break;
            }
            lr[i].second = now_l;
        }
    }

    for(int i = index-1; i >= 0; i--) {
        if(lr[i].first == 'l') {
            int now_l = lr[i].second;
            for(int j = i+1; j < index; j++) {
                if(lr[j].first == 'r') {
                    if(lr[j].second >= now_l) {
                        lr[j].second -= now_l;
                        now_l = 0;
                    } else {
                        now_l -= lr[j].second;
                        lr[j].second = 0;
                    }
                }
                if(now_l == 0) break;
            }
            lr[i].second = now_l;
        }
    }

    int num_l = 0;
    int num_r = 0;

    for(int i = 0; i < index; i++) {
        if(lr[i].first == 'r') {
            num_r += lr[i].second;
        } else {
            num_l += lr[i].second;
        }
    }

    cout << string(num_r, '(') << s << string(num_l, ')') << endl;

    return 0;
}