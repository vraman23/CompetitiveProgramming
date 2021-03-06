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

int main() {
  ios:: sync_with_stdio(0);
  cin.tie(0);
  int n, x;
  cin >> n >> x;
  int p [n];
  for(int i = 0; i < n; i++) cin >> p[i];
  int count = 0;
  sort(p, p+n);
  int start = 0;
  int end = n-1;
  while(start <= end){
      if (p[start] + p[end] > x){
          count++;
          end--;
      } else {
          count++;
          start++;
          end--;
      }
  }
  cout << count << "\n";

  return 0;
}
