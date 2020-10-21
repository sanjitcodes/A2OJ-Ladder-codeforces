// Name : Appleman and Card Game
#include <iostream>
#include <algorithm>
#include <vector>
#define ll long long
#define MOD 1000000007
using namespace std;
bool compare(ll a, ll b){
	return a > b;
}
int main(){
	ll n,k;
	cin >> n >> k;
	string str;
	ll freq[27]={0};
	cin >> str;
	for(ll i=0; i<str.length(); i++){
		freq[str[i]-'A']++;
	}
	sort(freq,freq+26,compare);
	// for(ll x : freq){
	// 	cout << x << " ";
	// }
	// prllf("\n");
	ll res=0;
	for(ll i=0; i<n; i++){
		if(freq[i]>=k){
			res += k*k;
			break;
		}else{
			res += freq[i]*freq[i];
			k -= freq[i];
			// prllf("%d %d\n",freq[i],res);
			if(k<=0){
				break;
			}
		}
	}
	printf("%lld\n",res);
	return 0;
}