//Name : Xenia and Divisors
#include <iostream>
#include <algorithm>
#include <vector>
#define ll long long
#define MOD 1000000007
using namespace std;

int main(){
	ll n;
	cin >> n;
	vector<ll> a,b,c;
	bool success = true;
	for(ll i=0; i<n; i++){
		ll temp;
		cin >> temp;
		if(temp==1){
			a.push_back(temp);
		}else if(temp==2 || temp ==3){
			b.push_back(temp);
		}else if(temp==4 || temp==6){
			c.push_back(temp);
		}else{
			success = false;
		}
	}
	if(!success){
		cout << "-1" << endl;
	}else{
		bool check = true;
		if(a.size() == b.size() && b.size() == c.size()){
			sort(b.begin(), b.end());
			sort(c.begin(), c.end());
			for(ll i=0; i<(n/3); i++){
				if(c[i]%b[i]!=0){
					check = false;
					break;
				}
			}
			if(!check){
				cout << "-1" << endl;
			}else{
				for(ll i=0; i<(n/3); i++){
					cout << a[i] << " " << b[i] << " " << c[i] << endl;
				}
			}
		}
		else{
			cout << "-1" << endl;
		}
	}

	return 0;
}