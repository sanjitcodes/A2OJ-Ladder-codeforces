// Name : Puzzles
#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
#define ll long long
#define MOD 1000000007
using namespace std;

int main(){
	ll k, n;
	cin >> k >> n;
	ll f[n];
	for(ll i=0; i<n; i++) cin >> f[i];
	sort(f,f+n);
	ll min_element = INT_MAX;

	for(ll i=0; i<=(n-k);i++){
		min_element = min(min_element,abs(f[i]-f[i+k-1]));
	}

	cout << min_element << "\n";

	return 0;
}