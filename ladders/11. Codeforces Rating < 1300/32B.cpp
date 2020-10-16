// Name : Borze
#include <iostream>
#include <algorithm>
#include <vector>
#define ll long long
#define MOD 1000000007
using namespace std;

int main(){
	string s;
	cin >> s;
	vector<int> v;
	for(int i=0; i<s.length(); i++){
		if(s[i]=='.'){
			v.push_back(0);
		}
		else if(s[i]=='-' && s[i+1]=='.'){
			v.push_back(1);
			i++;
		}
		else{
			v.push_back(2);
			i++;
		}
	}	
	for(int x: v){
		cout << x;
	}
	cout << "\n";
	return 0;
}