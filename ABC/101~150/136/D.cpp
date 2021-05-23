#include <bits/stdc++.h>
#include <cmath>

using ll = long long;
const ll INF = __LONG_LONG_MAX__;

using namespace std;

int main() {
    string s;
    cin >> s;

    int n = s.length();
    vector<int> ans(n);
    
    int start = -1;
    int end = -1;
    int rl = -1;

    for(int i = 0; i < n-1; i++) {
        bool cal = false;
        if(s[i] == 'R') {
            if(s[i+1] == 'R') {
                //RR
                if(start == -1) {
                    start = i;
                }  
            } else {
                //RL
                if(start == -1) {
                    start = i;
                }
                rl = i;
                if(i == n-2) {
                    end = i+1;
                    cal = true;
                }
            }
        } else {
            if(s[i+1] == 'R') { 
                //LR
                end = i;
                cal = true;
            } else {
                //LL
                if(i == n-2) {
                    end = i+1;
                    cal = true;
                }
            }
        }
        if(cal) {
            /*cout << start << " ";
            cout << rl << " ";
            cout << end << endl;*/
            int total = end - start + 1;
            int num_rl = (rl-start)/2 + (end-rl)/2 + 1;
            ans[rl] += num_rl;
            ans[rl+1] += total - num_rl;
            start = -1;
            rl = -1;
            end = -1;
        }

    }

    /*for(int i = 0; i < n; i++) {
        int history[3];
        history[0] = i;
        history[1] = -1;
        history[2] = -1;
        for(int j = 0; j < n; j++) {
            for(int k = 2; k >= 1; k--) {
                history[k] = history[k-1];
            }
            if(s[history[0]] == 'R') {
                history[0]++;
            } else {
                history[0]--;
            }
            if(history[0] == history[2]) {
                if(j % 2 != 0) {
                    ans[history[0]]++;
                } else {
                    ans[history[1]]++;
                }
                break;
            }
        }
    }*/

    for(int i = 0; i < n; i++) {
        printf("%d ", ans[i]);
    }
    printf("\n");

    return 0;
}