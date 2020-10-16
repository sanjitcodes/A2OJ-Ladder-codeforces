// Name : Young Physicist
// Code : 69A
#include <iostream>
#include <algorithm>
#include <vector>
#define ll long long
#define MOD 1000000007
using namespace std;

int main(){
	int t;
	int a=0,b=0,c=0;
	cin >> t;
	while(t--){
		int temp1, temp2, temp3;
		cin >> temp1 >> temp2 >> temp3;
		a += temp1;
		b += temp2;
		c += temp3;
	}
	if(a==0 && b==0 && c==0){
		cout << "YES" << endl;
	} else{
		cout << "NO" << endl;
	}
	return 0;
}