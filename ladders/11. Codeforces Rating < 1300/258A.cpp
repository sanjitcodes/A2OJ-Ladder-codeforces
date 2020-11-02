// Name : Little Elephant and Bits
#include <iostream>
#include <algorithm>
#include <vector>
#define ll long long
#define MOD 1000000007
using namespace std;

int main(){
	string str,s;
	cin >> str;
	bool check = false;
	for(int i=0; i<str.length(); i++){
		if(str[i]=='0' && check==false){
			check = true;
			continue;
		}
		else{
			s.push_back(str[i]);
		}
	}
	if(check==false){
		s.pop_back();
	}
	cout << s << endl;
	return 0;
}