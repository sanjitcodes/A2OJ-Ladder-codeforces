// Name : TL
#include <iostream>
#include <algorithm>
#include <vector>
#define ll long long
#define MOD 1000000007
using namespace std;

int main(){
	ll n,m;
	cin >> n >> m;
	ll a[n], b[m];
	for(ll i=0; i<n; i++){
		cin >> a[i];
	}
	for(ll i=0; i<m; i++){
		cin >> b[i];
	}
	sort(a,a+n);
	sort(b,b+m);

	if(a[n-1] >= b[0]){
		cout << "-1\n"; 
	}
	else{
		ll v = a[n-1];
		if(a[n-1] >= 2*a[0]){
			cout << a[n-1] << "\n";
		}
		else{
			ll it = a[n-1]+1;
			while(it<b[0]){
				if(it >= 2*a[0]){
					cout << it << "\n";
					break;
				}
				it++;
			}
			if(it==b[0]){
				cout << "-1\n";
			}
		}
	}
	return 0;
}