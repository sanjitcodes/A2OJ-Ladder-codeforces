// Name : Little Girl and Game
#include <iostream>
#include <algorithm>
#include <vector>
#define ll long long
#define MOD 1000000007
using namespace std;

int main(){
	string str;
	cin >> str;
	int ar[27]={0};
	for(int i=0; i<str.length(); i++){
		ar[str[i]-'a']++;
	}
	int odd = 0, even = 0;
	for(int i=0; i<27; i++){
		if(ar[i]&1){
			odd++;
		}else{
			even++;
		}
	}
	if(odd<=1){
		printf("First\n");
	}else{
		if(odd&1){
			printf("First\n");
		}else{
			printf("Second\n");
		}
	}
	return 0;
}