// Name : Jzzhu and Sequences (B)
#include <iostream>
#include <algorithm>
#include <vector>
#define ll long long
#define MOD 1000000007
using namespace std;

int main(){
	ll x,y,k;
	ll ar[10];
	cin >> x >> y >> k;
	ar[0] = x;
	ar[1] = y;
	ar[2] = y-x;
	ar[3] = -1*x;
	ar[4] = -1*y;
	ar[5] = x-y;
	printf("%lld\n",(MOD+(ar[(k-1)%6])%MOD)%MOD);
	return 0;
}