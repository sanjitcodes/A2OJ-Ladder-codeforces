// Name : Jzzhu and Children
#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#define ll long long
#define MOD 1000000007
using namespace std;

int main(){
	int n, k;
	cin >> n >> k;
	queue<pair<int,int> > q;
	for(int i=0; i<n; i++){
		int temp;
		cin >> temp;
		q.push({i+1,temp});
	}
	pair<int,int> p;
	while(!q.empty()){
		p.first = q.front().first;
		p.second = q.front().second;

		if((q.front().second - k)<=0){
			q.pop();
		} else{
			q.pop();
			p.second -= k;
			q.push(p); 
		}
	}
	cout << p.first << endl;
	// cout << q.front().first << " " << q.front().second << endl;
	return 0;
}