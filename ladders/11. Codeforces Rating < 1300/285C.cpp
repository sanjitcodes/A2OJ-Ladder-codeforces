// Name : Building Permutations
#include <iostream>
#include <algorithm>
#include <vector>
#define ll long long
#define MOD 1000000007
using namespace std;

int main(){
	ll n, temp;
	cin >> n;
	vector<ll> v;
	for(int i=0; i<n; i++){
		cin >> temp;
		v.push_back(temp);
	}
	sort(v.begin(),v.end());
	ll ans = 0;
	for(int i=0; i<n; i++){
		ans += abs(v[i]-(i+1));
	}
	cout << ans << endl;
	return 0;
}