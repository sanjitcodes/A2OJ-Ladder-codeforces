#include <iostream>
#include <algorithm>
#include <vector>
#define ll long long
#define MOD 1000000007
using namespace std;
 
int main(){
	ll ques;
	cin >> ques;
	ll count = 0;
	while(ques--){
		ll a,b,c;
		cin >> a >> b >> c;
		if(a+b+c >= 2){
			count++;
		}
	}
	cout << count << endl;
	
	return 0;
}