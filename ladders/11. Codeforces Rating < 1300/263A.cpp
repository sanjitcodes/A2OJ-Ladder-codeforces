#include <iostream>
#include <algorithm>
#include <vector>
#define ll long long
#define MOD 1000000007
using namespace std;

int main(){
	int ar[6][6], a, b;
	for(int i=1; i<6; i++){
		for(int j=1; j<6; j++){
			cin >> ar[i][j];
			if(ar[i][j]==1){
				a = i;
				b = j;
			}
		}
	}
	cout << abs(a-3)+abs(b-3) << endl;
	return 0;
}