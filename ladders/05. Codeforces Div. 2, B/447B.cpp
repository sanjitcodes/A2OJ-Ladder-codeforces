#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;

#define int    			    long long
#define MOD    			    1000000007
#define PI     			    3.1415926535897932384626
#define gc     			    getchar_unlocked
#define fo(i,n) 			for(i=0;i<n;i++)
#define rep    			    (i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define deb(x) 			    cout << #x << "=" << x << endl
#define deb2(x, y)  	  cout << #x << "=" << x << "," << #y << "=" << y << endl
#define pb            	push_back
#define pf				      pop_front
#define ppb             pop_back
#define ppf             pop_front
#define mp          	  make_pair
#define F               first
#define S               second
#define trav(it, a)     for(auto it = a.begin(); it != a.end(); it++)
#define ppc             __builtin_popcount
#define ppcll           __builtin_popcountll

template<typename T1,typename T2>istream& operator>>(istream& in,pair<T1,T2> &a){in>>a.fr>>a.sc;return in;}
template<typename T1,typename T2>ostream& operator<<(ostream& out,pair<T1,T2> a){out<<a.fr<<" "<<a.sc;return out;}
template<typename T,typename T1>T amax(T &a,T1 b){if(b>a)a=b;return a;}
template<typename T,typename T1>T amin(T &a,T1 b){if(b<a)a=b;return a;}

typedef pair<int, int>	pii;
typedef vector<int>		  vi;
typedef vector<pii>		  vpii;
typedef vector<vi>		  vvi;
typedef set<int>        si;
typedef list<int>       li;

const long long INF=1e18;
const int32_t M=1e9+7;

int mpow(int base, int exp); 

void solve() {
  int i, j, n;
  string s;
  cin >> s;
  int k;
  cin >> k;
  int ar[27] = {0};
  int maxi = 0;
  char c;
  fo(i,26){
  	cin >> ar[i];
  	maxi = max(maxi, ar[i]);
  	if(maxi == ar[i]){
  		c = 'a'+i;
  	}
  }

  	for(int i=0; i<(k); i++){
  		s.pb(c);
  	}
  	// deb(s);
  	int sum = 0;
  	for(int i=0; i<(s.length()); i++){
  		sum += ar[s[i]-'a']*(i+1);
  	}
  	cout << sum << "\n";


}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t = 1;
    // cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}


int mpow(int base, int exp) {
  base %= MOD;
  int result = 1;
  while (exp > 0) {
    if (exp & 1) result = ((long long)result * base) % MOD;
    base = ((long long)base * base) % MOD;
    exp >>= 1;
  }
  return result;
}