// Name : Queue at the School

#include <iostream>
#include <algorithm>
#include <vector>
#define ll long long
#define MOD 1000000007
using namespace std;

int main(){
	int n,k;
	string s;
	cin >> n >> k >> s;
	for(int i=0; i<k; i++){
		for(int j=0; j<s.length()-1; j++){
			if(s[j]=='B' && s[j+1]=='G'){
				swap(s[j],s[j+1]);
				j++;
			}
		}
	}	
	cout << s << "\n";
	return 0;
}