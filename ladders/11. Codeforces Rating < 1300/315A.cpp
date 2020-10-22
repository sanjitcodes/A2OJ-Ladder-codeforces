// Name : Seraja and Bottles
#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#define ll long long
#define MOD 1000000007
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n],b[n];
	int count=0;
	for(int i=0; i<n; i++){
		cin >> a[i] >> b[i];
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(i!=j && a[i]==b[j]){
				count++;
				// cout << a[i] << " " << b[j] << endl;
				break;
			}
		}
	}
	cout << n-count << endl;
	return 0;
}