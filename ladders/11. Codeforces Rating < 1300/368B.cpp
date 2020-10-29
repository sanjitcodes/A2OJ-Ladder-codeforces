// Name : Sereja and Suffixes

#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#define ll long long
#define MOD 1000000007
using namespace std;

int main(){
	
	int n,q;
	cin >> n >> q;
	int ar[n],b[n];
	set<int> s;
	for(int i=0; i<n; i++) cin >> ar[i];
	for(int i=n-1; i>=0; i--){
		s.insert(ar[i]);
		b[i] = s.size();
	}
	while(q--){
		int temp;
		cin >> temp;
		cout << b[temp-1] << endl;
	}
	return 0;
}