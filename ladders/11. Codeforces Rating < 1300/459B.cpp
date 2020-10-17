// Name : Pashmak and Flowers
#include <iostream>
#include <algorithm>
#include <vector>
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
	sort(ar,ar+n);
	ll c1=0,c2=0;
	ll i=0;
	while(ar[i]==ar[0] && i<n){
		c1++;
		i++;
	}
	if(i==n){
		cout << abs(ar[n-1]-ar[0]) << " " <<  n*(n-1)/2 << "\n";
	}else{
		i=n-1;
		while(ar[i]==ar[n-1] && i<n){
			c2++;
			i--;
		}
		cout << abs(ar[n-1]-ar[0]) << " " << c1*c2 << "\n";
	}
	
	return 0;
}