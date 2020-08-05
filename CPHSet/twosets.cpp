#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

#define F first
#define S second
#define PB push_back
#define MP make_pair

#define FOR(i, a, b) for (ll i = a; i < b; i++)
#define F0R(i, a) for(ll i = 0; i < a; i++)

ll n;

void print(vi perm) {
	F0R(i, perm.size()) {
		cout << perm[i] << " ";
	}
	cout << "\n";
}

int main() {
  ios:: sync_with_stdio(0);
  cin.tie(0);
  cin >> n;
  if (n * (n + 1) /2 % 2 == 1) cout << "NO" << "\n";
  else {
    cout << "YES" << "\n";
    vi one, two;
    if (n % 2 == 0) {
      for(int i = 1; i <= n/2; i+=2) {
        one.PB(i), one.PB(n-i+1);
        two.PB(i+1), two.PB(n-i);
      }
    } else if (n == 3) {
			one.PB(1), one.PB(2);
			two.PB(3);
		} else {
      one.PB(1), one.PB(2);
			two.PB(3);
      for(int i = 4; i < n; i+= 4) {
        one.PB(i), two.PB(i+1);
        two.PB(i+2), one.PB(i+3);
      }
    }
    cout << one.size() << "\n";
    print(one);
    cout << two.size() << "\n";
    print(two);
  }
}
