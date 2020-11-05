// Name : Dragons
#include <iostream>
#include <algorithm>
#include <vector>
#define ll long long
#define MOD 1000000007
using namespace std;

bool compare(const pair<int,int> a, const pair<int,int> b){
	if(a.first==b.first){
		return a.second > b.second;
	}
	return a.first < b.first;
}

int main(){
	ll strength,q;
	cin >> strength >> q;
	bool success = true;
	vector<pair<int,int> > v;
	for(int i=0; i<q; i++){
		ll a,b;
		cin >> a >> b;
		v.push_back({a,b});
	}
	sort(v.begin(), v.end(), compare);

	for(auto p : v){

		if(strength > p.first){
			strength += p.second;
		}
		else{
			success = false;
			break;
		}
	}
	if(success){
		cout << "YES\n"; 
	}
	else{
		cout << "NO\n";
	}
	return 0;
} 