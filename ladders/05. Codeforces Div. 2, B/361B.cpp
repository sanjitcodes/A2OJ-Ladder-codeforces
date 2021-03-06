// Jai Mata Di..
#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;

#define int             long long
#define PI              3.1415926535897932384626
#define gc              getchar_unlocked
#define fo(i,n)         for(i=0;i<n;i++)
#define rep(i,k,n)      for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define deb(x)          cout << #x << "=" << x << endl
#define deb2(x, y)      cout << #x << "=" << x << "," << #y << "=" << y << endl
#define endl            "\n"
#define pb              push_back
#define pf              pop_front
#define ppb             pop_back
#define ppf             pop_front
#define mp              make_pair
#define F               first
#define S               second
#define trav(it, a)     for(auto it = a.begin(); it != a.end(); it++)
#define ppc             __builtin_popcount
#define ppcll           __builtin_popcountll

template<typename T1,typename T2>istream& operator>>(istream& in,pair<T1,T2> &a){in>>a.fr>>a.sc;return in;}
template<typename T1,typename T2>ostream& operator<<(ostream& out,pair<T1,T2> a){out<<a.fr<<" "<<a.sc;return out;}
template<typename T,typename T1>T amax(T &a,T1 b){if(b>a)a=b;return a;}
template<typename T,typename T1>T amin(T &a,T1 b){if(b<a)a=b;return a;}

typedef pair<int, int>  pii;
typedef vector<int>     vi;
typedef vector<pii>     vpii;
typedef vector<vi>      vvi;
typedef set<int>        si;
typedef list<int>       li;

const long long INF = 1e18;
const long long MOD = 1000000007;
const long long MM = 998244353;

const int N = 10005;

int mpow(int base, int exp, int m);
int gcd(int a, int b);


void solve() {
    int i, j, n, k;
    cin >> n >> k;
    if(n==k){
    	cout << -1 << "\n";
    	return;
    }
    if(n==k+1){
    	for(int i=1; i<=n; i++){
    		cout << i << " ";
    	}
    	cout << "\n";
    	return;
    }
    int ar[n+1];
    for(i=2; i<=k+1; i++){
    	ar[i] = i;
    }
    ar[i++] = 1;
    for(; i<=n; i++){
    	ar[i] = i-1;
    }
    i--;
    if(i<=n)
    	ar[1] = i;
    else
    	ar[1] = 1;

    for(int i=1; i<=n; i++){
    	cout << ar[i] << " ";
    }
    cout << "\n";
    return;

}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    #ifdef NCR
        pmain();
    #endif
    #ifdef SIEVE
        sieve();
    #endif

    int t = 1;
    // cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}

int gcd(int a, int b){
    return b==0 ? a : gcd(b,a%b);
}

int mpow(int base, int exp, int m=MOD) {
  base %= m;
  int result = 1;
  while (exp > 0) {
    if (exp & 1) result = ((long long)result * base) % m;
    base = ((long long)base * base) % m;
    exp >>= 1;
  }
  return result;
}