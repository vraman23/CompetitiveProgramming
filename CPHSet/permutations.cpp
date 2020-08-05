#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

#define F first
#define S second
#define PB push_back
#define MP make_pair

#define FOR(i, a, b) for (int i = a; i <= b; i++)
#define F0R(i, a) for(int i = 0; i < a; i++)

deque<int> perm;
int n;

void print() {
	F0R(i, n) {
		cout << perm[i] << " ";
	}
	cout << "\n";
}


int main() {
  ios:: sync_with_stdio(0);
  cin.tie(0);
  cin >> n;

  perm.push_back(2);
  perm.push_back(4);
  perm.push_back(1);
  perm.push_back(3);

  if(n == 1) cout << "1" << "\n";
  else if (n == 2 || n == 3) cout << "NO SOLUTION" << "\n";
  else {
    FOR(i, 5, n){
      if(i%2 == 0) perm.push_front(i);
      else perm.push_back(i);
    }
    print();
  }


}
