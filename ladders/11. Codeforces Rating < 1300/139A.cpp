// Name : Petr and Book
#include <iostream>
#include <algorithm>
#include <vector>
#define ll long long
#define MOD 1000000007
using namespace std;

int main(){
	int n;
	cin >> n;
	vector<pair<int,int> > v;
	for(int i=0; i<7; i++){
		int temp;
		cin >> temp;
		v.push_back({i+1,temp});
	}	
	int sum = 0, it=0; 	
	bool success = false;
	while(success == false){
		sum+=v[it].second;
		if(sum>=n){
			cout << v[it].first << "\n";
			success = true;
		}
		it++;
		it = it%7;
	}
	return 0;
}