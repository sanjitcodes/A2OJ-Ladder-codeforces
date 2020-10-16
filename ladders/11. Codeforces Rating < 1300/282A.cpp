// Name : Bit++
#include <iostream>
#include <algorithm>
#include <vector>
#define ll long long
#define MOD 1000000007
using namespace std;

int main(){
	int t,val=0;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		if(s[0]=='+' || s[1]=='+' || s[2]=='+'){
			val++;
		}else{
			val--;
		}
	}
	printf("%d\n",val);
	return 0;
}