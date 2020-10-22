// Name : Sort the Array
#include <iostream>
#include <algorithm>
#include <vector>
#define ll long long
#define MOD 1000000007
using namespace std;

int main(){
	ll n;
	cin >> n;
	ll ar[n],b[n];
	for(ll i=0; i<n; i++){
		cin >> ar[i];
		b[i] = ar[i];
	}	
	sort(b,b+n);
	ll L=-1,R=-1;
	for(ll i=0; i<n; i++){
		if(ar[i]!=b[i]){
			L = i;
            break;
		}
	}
	for(ll i=n-1; i>=0; i--){
		if(ar[i]!=b[i]){
			R = i;
            break;
		}
	}
    // cout << L << " " << R << endl;
 	if(L==-1 || R==-1){
		cout << "yes" << endl << "1 1" << endl;
	} else{
		bool success = true;
		reverse(ar+L,ar+R+1);
		// for(ll i=0; i<n; i++){
		// 	cout << ar[i] << " ";
		// } cout << endl;
		for(ll i=0; i<n; i++){
			if(ar[i]!=b[i]){
				success = false;
			}
		}
		if(success){
			cout << "yes" << endl << L+1 << " " << R+1 << endl;
		}else{
			cout << "no" << endl;
		}
	}
	return 0;
}