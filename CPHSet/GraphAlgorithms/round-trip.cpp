#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vpi;


#define FOR(i, a, b) for (ll i = a; i < b; i++)
#define F0R(i, a) for(ll i = 0; i < a; i++)
#define pb push_back

const int MOD = 1e9+7; // 998244353;
const int MX = 1e5; //
const ll INF = 1e18; //

int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};
string ds = "RLDU";

int n, m;
vi adj[MX];


int main() {
  ios:: sync_with_stdio(0);
  cin.tie(0);
  cin >> n >> m;
  if(m == n-1) cout << "IMPOSSIBLE" <<"\n";
  //check for a cycle of length n


  return 0;
}
