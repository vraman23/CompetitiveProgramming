//https://codeforces.com/problemset/problem/479/C
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vpi;


#define FOR(i, a, b) for (ll i = a; i < b; i++)
#define F0R(i, a) for(ll i = 0; i < a; i++)

const int MOD = 1e9+7; // 998244353;
const int MX = 2e5+5; //
const ll INF = 1e18; //
int main() {
  ios:: sync_with_stdio(0);
  cin.tie(0);
  int n, a, b;
  cin >> n;
  vpi days;
  while(n--){
    cin >> a >> b;
    days.push_back(make_pair(a, b));
  }
  sort(days.begin(), days.end());
  int day = 0;
  for(auto pair : days){
    if (day <= pair.second) day = pair.second;
    else day = pair.first;
  }
  cout << day << "\n";

  return 0;
}
