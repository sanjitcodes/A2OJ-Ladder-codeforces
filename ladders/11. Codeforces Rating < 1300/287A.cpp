// Name : IQ Test
#include <iostream>
#include <algorithm>
#include <vector>
#define ll long long
#define MOD 1000000007
using namespace std;

int main(){

	char ar[4][4];

	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			cin >> ar[i][j];
		}
	}
	bool success = false;
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			int hash=0,dot=0;
			hash += (ar[i][j]=='#')?1:0;
			hash += (ar[i+1][j+1]=='#')?1:0;
			hash += (ar[i][j+1]=='#')?1:0;
			hash += (ar[i+1][j]=='#')?1:0;
			if(hash==0 || hash==1 || hash==3 || hash==4){
				success = true;
				break;
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