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

  int n, a, b, count, curr;
  vpi movies;
  cin >> n;
  F0R(i, n){
    cin >> a >> b;
    movies.push_back(make_pair(b, a));
  }
  sort(movies.begin(), movies.end());
  curr = 0;
  count = 0;
  for(auto movie : movies){
    // cout << movie.first << " " << movie.second << "\n";
    if (movie.second >= curr) {
      count++;
      curr = movie.first;
    }
  }
  cout << count << "\n";

  return 0;
}
