// Name : Jeff and Digits
#include <iostream>
#include <algorithm>
#include <vector>
#define ll long long
#define MOD 1000000007
using namespace std;

int main(){
	int n,temp;
	cin >> n;
	int fives=0,zeroes=0;
	for(int i=0; i<n; i++){
		cin >> temp;
		fives += (temp==5)?1:0;
		zeroes += (temp==0)?1:0;
	}
	// cout << fives << " " << zeroes << "\n";
	if(zeroes==0){
		cout << "-1\n";
	}
	else{
		int x = fives/9;
		if(x==0){
			cout << "0\n";
		}
		else{
			string str;
			for(int i=0; i<x*9; i++){
				str.push_back('5');
			}
			for(int i=0; i<zeroes; i++){
				str.push_back('0');
			}
			// printing
			for(char c: str){
				cout << c;
			}
			cout << '\n';
		}
	}
	return 0;
}