#include <bits/stdc++.h>

using namespace std;


typedef long long ll;
typedef pair<int,int> pi;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<pi> vpi;

template <typename T> void setmax(T& a, const T& b) { if (b > a) a = b; }

#define FOR(i, a, b) for (ll i = a; i < b; i++)
#define F0R(i, a) for(ll i = 0; i < a; i++)
#define f first
#define s second
#define pb push_back
#define sz(a) int((a).size())


const int MOD = 1e9+7; // 998244353;
const int MX = 2e5+5; //
const ll INF = 1e18; //
int n;
string s;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); // see Fast Input & Output
    map<char, int> m;
    cin >> n;
    cin >> s;
    F0R(i, n) m[s[i]]++;
    map<int, int> count;
    for(auto x : m){
      if (x.f == '1') continue;
      if (x.f == '2') count[2]+= x.s;
      if(x.f == '3') {
        count[3]+= x.s;
      }
      if(x.f == '4') {
        count[2]+= 2*x.s;
        count[3]+= x.s;
      }
      if(x.f == '5'){
        count[5]+= x.s;
      }
      if(x.f =='6'){
        count[5]+= x.s;
        count[3]+= x.s;
      }
      if(x.f == '7') count[7]+= x.s;
      if(x.f == '8') {
        count[2] += 3*x.s;
        count[7]+= x.s;
      }
      if(x.f == '9') {
        count[7]+=x.s;
        count[3] += 2*x.s;
        count[2]+=x.s;
      }
    }
    string out = "";
    for(int i = 0; i < count[7]; i++) out += "7";
    for(int i = 0; i < count[5]; i++) out += "5";
    for(int i = 0; i < count[3]; i++) out += "3";
    for(int i = 0; i < count[2]; i++) out += "2";
    cout << out << "\n";
}
