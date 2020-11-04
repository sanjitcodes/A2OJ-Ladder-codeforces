// Name : Cinema Line
#include <iostream>
#include <algorithm>
#include <vector>
#define ll long long
#define MOD 1000000007
using namespace std;

int main(){
	ll pacchi=0, panja=0, sau=0;
	ll n;
	cin >> n;
	ll ar[n];
	bool success = true;
	for(ll i=0; i<n; i++) cin >> ar[i];
	for(ll i=0; i<n; i++){
		if(ar[i]==25){
			pacchi++;
			continue;
		}
		else if(ar[i]==50){
			if(pacchi>=1){
				pacchi--;
				panja++;
			}
			else{
				success = false;
			}
		}
		else if(ar[i]==100){
			if(panja>=1 && pacchi>=1){
				sau++;
				panja--;
				pacchi--;
			}
			else if(pacchi>=3){
				sau++;
				pacchi -= 3;
			}
			else{
				success = false;
			}
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