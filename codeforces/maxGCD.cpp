#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <functional>
#include <queue>
#include <set>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef double db;
typedef string str;

typedef pair<int,int> pi;
typedef pair<ll,ll> pl;
typedef pair<db,db> pd;

typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<db> vd;
typedef vector<str> vs;
typedef vector<pi> vpi;
typedef vector<pl> vpl;
typedef vector<pd> vpd;

#define mp make_pair
#define f first
#define s second
#define sz(x) (int)x.size()
#define all(x) begin(x), end(x)
#define rall(x) (x).rbegin(), (x).rend()
#define ins insert
#define ft front()
#define bk back()
#define pf push_front
#define pb push_back
#define eb emplace_back
#define lb lower_bound
#define ub upper_bound

#define FOR(i, a, b) for (ll i = a; i < b; i++)
#define F0R(i, a) for(ll i = 0; i < a; i++)

const int MOD = 1e9+7; // 998244353;
const int MX = 2e5+5; //
const ll INF = 1e18; //
const ld PI = acos((ld)-1);

int gcd(int a, int b) {
  if (b== 0) return a;
  return gcd(b, a%b);
}

int findMaxGCD(int n)
{
    int high = n;

    int count[high + 1] = {0};
    for (int i = 0; i < n; i++)
        count[i+1]++;

    // Variable to store the
    // multiples of a number
    int counter = 0;

    // Iterating from MAX to 1
    // GCD is always between
    // MAX and 1. The first
    // GCD found will be the
    // highest as we are
    // decrementing the potential
    // GCD
    for (int i = high; i >= 1; i--)
    {
        int j = i;
       counter = 0;

        // Iterating from current
        // potential GCD
        // till it is less than
        // MAX
        while (j <= high)
        {
            // A multiple found

            if(count[j] >=2)
               return j;

           else if (count[j] == 1)
                counter++;

            // Incrementing potential
            // GCD by itself
            // To check i, 2i, 3i....
            j += i;

            // 2 multiples found,
            // max GCD found
            if (counter == 2)
                return i;
        }
    }
}

int main() {
  ios:: sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin >> t;
  int n;
  F0R(i, t){
    cin >> n;
    int maxGCD = findMaxGCD(n);
    cout << maxGCD << "\n";
  }
  return 0;
}
