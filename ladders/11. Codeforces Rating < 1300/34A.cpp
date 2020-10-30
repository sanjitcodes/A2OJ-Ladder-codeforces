// Name : Reconnaissance 2
#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
#define ll long long
#define MOD 1000000007
using namespace std;

int main(){
	ll n;
	cin >> n;
	ll ar[n];
	for(ll i=0; i<n; i++){
		cin >> ar[i];
	}	
	ll min=INT_MAX, a=0, b=0;
	for(ll i=0; i<(n-1); i++){
		if(abs(ar[i]-ar[i+1]) < min){
			min = abs(ar[i]-ar[i+1]);
			a = i;
			b = i+1;
		}
	}
	if(abs(ar[0]-ar[n-1]) < min){
		min = abs(ar[0]-ar[n-1]);
		a = n-1;
		b = 0;
	}
	cout << a+1 << " " << b+1 << endl;
	return 0;
}