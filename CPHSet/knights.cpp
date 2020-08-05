#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

#define F first
#define S second
#define PB push_back
#define MP make_pair

#define FOR(i, a, b) for (ll i = a; i <= b; i++)
#define F0R(i, a) for(ll i = 0; i < a; i++)

ll n;

int main() {
  ios:: sync_with_stdio(0);
  cin.tie(0);
  cin >> n;
  FOR(i, 1, n){
    cout << (i*i)*(i*i - 1)/2 - 4*(i-1)*(i-2) << "\n";
  }
}
