// Name : Letter
#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
#define ll long long
#define MOD 1000000007
using namespace std;

int main(){
	string str,st2;
	getline(cin, str);
	getline(cin, st2);
	bool success = true;
	int inputBig[27]={0};
	int inputSmall[27]={0};
	for(int i=0; i<str.length(); i++){
		if(isupper(str[i])){
			inputBig[str[i]-'A']++;
		}else{
			inputSmall[str[i]-'a']++;
		}
	}

	for(int i=0; i<st2.length(); i++){
		if(isupper(st2[i])){
			inputBig[st2[i]-'A']--;
			if(inputBig[st2[i]-'A']==-1){
				success = false;
				break;
			}
		}
		else{
			inputSmall[st2[i]-'a']--;
			if(inputSmall[st2[i]-'a']==-1){
				success = false;
				break;
			}
		}
	}
	if(!success){
		cout << "NO\n";
	}else{
		cout << "YES\n";
	}
	return 0;
}