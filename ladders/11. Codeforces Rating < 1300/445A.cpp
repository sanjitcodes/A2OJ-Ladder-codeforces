// Name : DZY Loves Chessboard
#include <iostream>
#include <algorithm>
#include <vector>
#define ll long long
#define MOD 1000000007
using namespace std;

int main(){
	int n,m;
	cin >> n >> m;
	char ar[n][m];
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin >> ar[i][j];
		}
	}	
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(ar[i][j]=='.'){
				if((i+j)&1){
					ar[i][j] = 'W';
				}else{
					ar[i][j] = 'B';
				}
			}
			cout << ar[i][j];
		}cout << "\n";
	}
	return 0;
}