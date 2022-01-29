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
    char s[n];
    //char t[n];
    for(int i = 0; i < n; i++) {
        cin >> s[i];
        //t[i] = s[i];
    }

    //sort(t, t+n);
    //cout << t << endl;

    vector<int> count(26, 0);
    for(int i = 0; i < n; i++) {
        int num = s[i] - 'a';
        count[num]++;
    }

    vector<char> dic;
    for(int i = 0; i < 26; i++) {
        if(count[i] > 0) {
            char c = 'a' + i;
            dic.push_back(c);
        }
    }
    sort(all(dic));
    int dicsize = dic.size();

    //vector<int> test = count;
    //for(auto x : test) cout << x << endl;

    int head = 0;
    int tail = n-1;
    int index = 0;

    while(head < tail && index < dicsize) {
        char c = dic[index];
        int zz = c - 'a';
        if(count[zz] <= 0) {
            index++;
            continue;
        }
        int now_t = -1;
        vector<int> d = count;
        for(int i = tail; i >= head; i--) {
            int num = s[i] - 'a';
            d[num]--;
            if(s[i] == c) {
                now_t = i;
                break;
            }
        }
        //cout << now_t << endl;
        int now_h = -1;
        for(int i = head; i <= tail; i++) {
            int num = s[i] - 'a';
            d[num]--;
            if(s[i] > c) {
                now_h = i;
                break;
            }
        }
        //cout << now_h << endl;
        if(now_t == -1 || now_h == -1) {
            index++;
            continue;
        }
        if(now_h < now_t) {
            swap(s[now_h], s[now_t]);
            head = now_h + 1;
            tail = now_t - 1;
            count = d;
        } else {
            index++;
            continue;
        }
    }

    for(int i = 0; i < n; i++) cout << s[i];
    cout << "\n";


   

    return 0;
}