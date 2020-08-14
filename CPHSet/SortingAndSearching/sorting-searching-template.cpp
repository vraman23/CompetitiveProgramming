#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int,int> pi;
typedef vector<int> vi;

#define FOR(i, a, b) for (ll i = a; i < b; i++)
#define F0R(i, a) for(ll i = 0; i < a; i++)

const int MOD = 1e9+7; // 998244353;
const int MX = 2e5+5; //
const ll INF = 1e18; //


bool comp(string a, string b) {
  if (a.size() != b.size()) return a.size() < b.size();
  return a < b;
}

struct P {
     int x, y;
     bool operator<(const P &p) {
       if (x != p.x) return x < p.x;
       else return y < p.y;
     }
};


int main() {
  ios:: sync_with_stdio(0);
  cin.tie(0);


  return 0;
}
