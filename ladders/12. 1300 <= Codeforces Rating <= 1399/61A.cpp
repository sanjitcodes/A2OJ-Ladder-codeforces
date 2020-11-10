// Name : Ultra-Fast Mathematician
#include <iostream>
#include <algorithm>
#include <vector>
#define ll long long
#define MOD 1000000007
using namespace std;

int main(){
	string a,b;
	cin >> a >> b;
	string c;
	for(int i=0; i<a.length(); i++){
		if(a[i]==b[i]){
			c.push_back('0');
		}else{
			c.push_back('1');
		}
	}
	cout << c << endl;
	return 0;
}