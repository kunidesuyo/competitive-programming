#include <bits/stdc++.h>
#include <cmath>

#define all(x) (x).begin(),(x).end()

using ll = long long;
const ll INF = 1LL<<60;
const int inf = INT_MAX / 2;

using namespace std;

int main() {
  int n, q;
  cin >> n >> q;
  vector<int> head(n, -1);
  vector<int> tail(n, -1);
  for(int i = 0; i < q; i++) {
    int a, x, y;
    cin >> a;
    if(a == 1) {
      cin >> x >> y;
      x--; y--;
      tail[x] = y;
      head[y] = x;
    } else if(a == 2) {
      cin >> x >> y;
      x--; y--;
      tail[x] = -1;
      head[y] = -1;
    } else {
      cin >> x;
      stack<int> st;
      queue<int> qu;
      x--;
      st.push(x);
      int now = head[x];
      if(now != -1) {
        st.push(now);
        while(true) {
          now = head[now];
          if(now == -1) break;
          else st.push(now);
        }
      }
      now = tail[x];
      if(now != -1) {
        qu.push(now);
        while(true) {
          now = tail[now];
          if(now == -1) break;
          else qu.push(now);
        }
      }
      int m = st.size() + qu.size();
      cout << m << " ";
      while(!st.empty()) {
        int out = st.top();
        st.pop();
        cout << out+1 << " ";
      }
      while(!qu.empty()) {
        int out = qu.front();
        qu.pop();
        cout << out+1 << " ";
      }
      cout << "\n";
    }
  }
  return 0;
}