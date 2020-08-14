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
  int t, n;
  string arr;
  cin >> t;
  while(t--){
    cin >> n >> arr;
    vi a(n, 0);
    vi sum(n+1, 0);
    for(int i = 0; i < n; i++){
      a[i] = (int) arr[i];
      sum[i+1] = sum[i] + a[i];
    }
    for(int i = 0; i <= n; i++) cout << sum[i] << " ";
    cout << "\n";
    int count = 0;
    for(int i = 1; i <= n; i++){
      for(int j = 0; j + i<= n; j++){
        if (sum[j+i] - sum[j] == i) count++;
      }
    }
    cout << count << "\n";

  }
}
