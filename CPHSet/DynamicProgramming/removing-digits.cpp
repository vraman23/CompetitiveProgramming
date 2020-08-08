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
  int n, curr;
  cin >> n;
  vi steps(n+1, 1e9);
  for(int i = 1; i <= n; i++){
    if (i < 10) steps[i] = 1;
    else {
      curr = i;
      while(curr/10 > 0){
        steps[i] = min(steps[i], 1 + steps[i - curr % 10]);
        curr /= 10;
      }
      steps[i] = min(steps[i], 1+steps[i - curr]);
    }
  }
  cout << steps[n] << "\n";
  return 0;
}
