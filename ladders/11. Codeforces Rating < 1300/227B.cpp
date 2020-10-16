// Name : Effective Approach
#include <iostream>
#include <algorithm>
#include <vector>
#define ll long long
#define MOD 1000000007
using namespace std;

int main(){
	ll n;
	cin >> n;
	ll ar[n+1];
	ll pos[100010];
	for(ll i=1; i<=n; i++){
		cin >> ar[i];
		pos[ar[i]]=i;
	} 
	ll a = 0, b = 0;
	ll t;
	cin >> t;
	while(t--){
		ll temp;
		cin >> temp;
		a += pos[temp];
		b += (n-pos[temp])+1;
	}
	cout << a << " " << b << "\n";
	return 0;
}