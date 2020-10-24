// Name : Polo the Penguin and Matrix
#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#define ll long long
#define MOD 1000000007
using namespace std;

int main(){
	ll n, m, k;
	cin >> n >> m >> k;
	set<ll> s;
	ll ar[n*m+1];
	for(ll i=0; i<n*m; i++){
		cin >> ar[i];
		s.insert(ar[i]%k);
	}
	if(s.size()!=1){
		cout << "-1\n";
	}else{
		ll steps = 0;
		sort(ar,ar+n*m);
		ll pivot = ar[n*m/2]; 
		for(ll i=0; i<n*m; i++){
			steps += abs(ar[i]-pivot)/k;
		}
		cout << steps << "\n";
	}
	return 0;
}