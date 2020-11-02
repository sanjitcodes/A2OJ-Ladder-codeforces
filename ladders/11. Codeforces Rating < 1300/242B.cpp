// Name : Big Segment
#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
#define ll long long
#define MOD 1000000007
using namespace std;

int main(){
	ll n, x, y;
	cin >> n;
	vector<pair<ll,ll> > v;
	for(ll i=0; i<n; i++){
		cin >> x >> y;
		v.push_back({x,y});
	}
	ll L=INT_MAX, R=INT_MIN;
	for(auto it : v){
		L = min(L,it.first);
		R = max(R,it.second);
	}
	// cout << L << " " << R << "\n";
	ll res = -1, cnt=0;
	for(auto p: v){
		cnt++;
		if(p.first<=L && p.second>=R){
			res = cnt;
			break;
		}
	}
	cout << res << "\n";

	return 0;
}