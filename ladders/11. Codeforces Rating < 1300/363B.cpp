// Name : Fence
#include <iostream>
#include <algorithm>
#include <vector>
#define ll long long
#define MOD 1000000007
using namespace std;

int main(){
	ll n,k;
	cin >> n >> k;
	ll ar[n];
	for(ll i=0; i<n; i++){
		cin >> ar[i];
	}
	ll s=0, e=k-1;
	ll sum = 0, min_sum = 0, idx=1;
	for(ll i=0; i<k; i++){
		sum += ar[i];
	}
	min_sum = sum;
	for(ll i=1; i<=(n-k); i++){
		sum = sum - ar[i-1] + ar[i-1+k];
		if(sum < min_sum){
			min_sum = sum;
			idx = i+1;
		}	
 	}
	cout << idx << "\n";
	return 0;
}