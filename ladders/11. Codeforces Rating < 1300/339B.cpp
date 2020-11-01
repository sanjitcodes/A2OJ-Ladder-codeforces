// Name : Xenia and Ringroad
#include <iostream>
#include <algorithm>
#include <vector>
#define ll long long
#define MOD 1000000007
using namespace std;

int main(){
	ll n,t;
	cin >> n >> t;
	ll ar[t];
	for(ll i=0; i<t; i++){
		cin >> ar[i];
	}

	ll ans = ar[0]-1;

	for(ll i=1; i<t; i++){
		if(ar[i]>=ar[i-1]){
			ans+= (ar[i]-ar[i-1]);
		}
		else{
			ans += n+(ar[i]-ar[i-1]);
		}
	}
	cout << ans << "\n";
	return 0;
}