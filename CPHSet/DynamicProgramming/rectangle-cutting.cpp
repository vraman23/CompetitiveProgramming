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
  int a, b;
  cin >> a >> b;
  vector<vi> moves (a+1, vi(b+1, 0));
  for(int i = 0; i <= a; i++){
    for(int j = 0; j <= b; j++){
      if (i == j) moves[i][j] = 0;
      else {
        moves[i][j] = 1e9;
        for(int h = 1; h < j; h++)
          moves[i][j] = min(moves[i][j], 1 + moves[i][h] + moves[i][j-h]);
        for(int v = 1; v < i; v++)
          moves[i][j] = min(moves[i][j], 1 + moves[v][j] + moves[i-v][j]);
      }
    }
  }
  cout << moves[a][b] << "\n";
  return 0;
}
