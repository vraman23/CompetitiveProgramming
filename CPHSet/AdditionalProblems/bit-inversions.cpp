#include <bits/stdc++.h>

using namespace std;


typedef long long ll;
typedef pair<int,int> pi;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<pi> vpi;

template <typename T> void setmax(T& a, const T& b) { if (b > a) a = b; }

#define FOR(i, a, b) for (ll i = a; i < b; i++)
#define F0R(i, a) for(ll i = 0; i < a; i++)
#define f first
#define s second
#define pb push_back
#define sz(a) int((a).size())


const int MOD = 1e9+7; // 998244353;
const int MX = 2e5; //
const ll INF = 1e18; //
string s;
int m;
set<int> dif;
multiset<int> ms;

void setIO(string name = "") { // name is nonempty for USACO file I/O
    ios_base::sync_with_stdio(0); cin.tie(0); // see Fast Input & Output
    // alternatively, cin.tie(0)->sync_with_stdio(0);
    if (sz(name)) {
        freopen((name+".in").c_str(), "r", stdin); // see Input & Output
        freopen((name+".out").c_str(), "w", stdout);
    }
}

void modify(int x){
  if(x == 0 || x == sz(s)) return;
  auto it = dif.find(x);
  if(it!= end(dif)){
    int a = *prev(it), b = *next(it);
    ms.erase(ms.find(x-a)), ms.erase(ms.find(b-x));
    ms.insert(b-a);
    dif.erase(it);
  } else {
    it = dif.insert(x).f;
    int a = *prev(it), b = *next(it);
    ms.erase(ms.find(b-a));
    ms.insert(x-a), ms.insert(b-x);
  }
}

int main() {
    setIO();
    cin >> s >> m;

    dif.insert(0);
    dif.insert(sz(s));
    for(int i = 1; i < sz(s); i++) {
      if(s[i]!= s[i-1]) dif.insert(i);
    }
    for(auto it = dif.begin(); next(it) != dif.end(); it++)
      ms.insert(*next(it) - *it);
    F0R(i, m){
      int x; cin >> x;
      modify(x-1); modify(x);
      cout << *ms.rbegin() << " ";
    }

}
