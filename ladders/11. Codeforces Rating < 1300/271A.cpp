// Name : Beautiful Year
#include <iostream>
#include <algorithm>
#include <vector>
#define ll long long
#define MOD 1000000007
using namespace std;
bool isdistinct(int n){
	int ar[10]={0};
	int temp = n;
	while(temp){
		ar[temp%10]++;
		temp = temp/10;
	}
	bool distinct = true;
	for(int i=0; i<10; i++){
		if(ar[i]>=2){
			distinct = false;
			break;
		}
	}
	return distinct;
}
int main(){
	int n;
	cin >> n;
	for(int i=n+1; i<=10000; i++){
		if(isdistinct(i)){
			cout << i << "\n";
			break;
		}
	}	
	return 0;
}