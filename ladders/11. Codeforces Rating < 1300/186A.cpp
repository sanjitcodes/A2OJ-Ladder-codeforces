// Name : Comparing Strings
#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
#define ll long long
#define MOD 1000000007
using namespace std;

int main(){
	string s1,s2;
	cin>>s1>>s2;
	ll a[26]={0},b[26]={0};
	ll c = 0, sum = 0;

	if(s1.length() != s2.length()){
	    cout<<"NO";
	    return 0;
	}

	for(int i=0;i<s1.length();i++){
	   if(s1[i] != s2[i]) c++; 
	    sum += s1[i] - s2[i];
	}
	if((c==2 || c==0)&& sum==0) 
		cout<<"YES";
	else 
		cout<<"NO";
	
	return 0;
}