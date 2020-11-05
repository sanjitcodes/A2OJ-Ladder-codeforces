// Name : Domino
#include <iostream>
#include <algorithm>
#include <vector>
#define ll long long
#define MOD 1000000007
using namespace std;

int main(){
	ll n, a, b, s1=0, s2=0;
	cin >> n;
	bool check = false;
	for(int i=0; i<n; i++){
		cin >> a >> b;
		s1 += a;
		s2 += b;
		if((a%2==1 && b%2==0) || (a%2==0 && b%2==1) ){
			check = true;
		}
	}
	if((s1&1)==0 && (s2&1)==0){
		cout << "0\n";
	}
	else if(s1%2==0 && s2%2==1){
		cout << "-1\n";
	}
	else if(s1%2==1 && s2%2==0){
		cout << "-1\n";
	}
	else{
		if(check){
			cout << "1\n";
		}
		else{
			cout << "-1\n";
		}
	}
	return 0;
}