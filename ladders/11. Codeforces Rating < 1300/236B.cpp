// Name : Easy Number Challenge
#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#define ll long long
#define MOD 1000000007
#define modi 1073741824
using namespace std;
ll ar[1000010]={0};
int d(int a){
	if(ar[a]!=0){
		return ar[a];
	}
	// for(ll i=1; i<a; i++){
		for(ll j=1; j<=sqrt(a); j++){
			if(a%j==0){
				if(j == a/j){
					ar[a]++;
				}
				else{
					ar[a]+=2;
				}
			}
		}
	//}
	return ar[a];
}
int main(){
	
	ll ans = 0;
	ll a,b,c;
	cin >> a >> b >> c;
	for(ll i=1; i<=a; i++){
		for(ll j=1; j<=b; j++){
			for(ll k=1; k<=c; k++){
				ans = (ans + d(i*j*k))%modi;
			}
		}
	}
	cout << ans%modi << endl;
	return 0;
}