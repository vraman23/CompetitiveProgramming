#include <iostream>
#include <vector>

using namespace std;

typedef long long ll;
typedef pair<int,int> pi;
typedef vector<int> vi;

#define FOR(i, a, b) for (ll i = a; i < b; i++)
#define F0R(i, a) for(ll i = 0; i < a; i++)

const int MOD = 1e9+7; // 998244353;
const int MX = 2e5+5; //
const ll INF = 1e18; //

int main() {
  ios:: sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin >> n;
  vi w(n);
  int total = 0;
  F0R(i, n) {
    cin >> w[i];
    total += w[i];
  }

  vector<vi> possible(total+1, vi(n+1, 0));
  for (int i = 0; i <= n; i++) possible[0][i] = 1;
  for(int x = 1; x <= total; x++){
    for(int k = 1; k <= n; k++){
      if (x-w[k-1] >= 0) possible[x][k] = possible[x][k-1] || possible[x-w[k-1]][k-1];
      else possible[x][k] = possible[x][k-1];
    }
  }
  int count = 0;
  string out = "";
  for(int x = 1; x <= total; x++){
    if (possible[x][n]) count++;
  }
  cout << count << "\n";
  for(int x = 1; x <= total; x++){
    if (possible[x][n]) cout << x << " ";
  }
  cout <<"\n";
  return 0;
}
