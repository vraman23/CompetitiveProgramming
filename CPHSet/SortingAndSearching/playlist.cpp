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

const int mxN = 2e5;
int n, song[mxN];

int main() {
  ios:: sync_with_stdio(0);
  cin.tie(0);
  cin >> n;
  for(int i = 0; i < n; i++) cin >> song[i];

  map<int, int> m;
  int maxLen = 0;
  for(int i = 0, j = 0; i < n; i++){
    while(j < n && m[song[j]] < 1){
      m[song[j]]++;
      j++;
    }
    maxLen = max(maxLen, j-i);
    m[song[i]]--;
  }
  cout << maxLen << "\n";
  return 0;
}
