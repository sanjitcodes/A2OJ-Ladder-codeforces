// Name : Chat Room
#include <iostream>
#include <algorithm>
#include <vector>
#define ll long long
#define MOD 1000000007
using namespace std;

int main(){
	string str;
	cin >> str;
	string s = "hello";
	int i=0, j=0;
	bool success = false;
	for(int k=0; k<str.length(); k++){
		if(str[k]==s[j]){
			j++;
			if(j==s.length()){
				success = true;
				break;
			}
		}
	}	
	if(success){
		cout << "YES\n";
	}else{
		cout << "NO\n";
	}
	return 0;
}