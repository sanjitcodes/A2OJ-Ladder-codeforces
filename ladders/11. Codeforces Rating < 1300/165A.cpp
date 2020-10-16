// Name : Supercentral Point
#include <iostream>
#include <algorithm>
#include <vector>
#define ll long long
#define MOD 1000000007
using namespace std;

int main(){
	int t;
	cin >> t;
	vector<pair<int,int> > v;
	for(int i=0; i<t; i++){
		int a,b;
		cin >> a >> b;
		v.push_back({a,b});
	}
	int count = 0;
	for(int i=0; i<t; i++){
		bool r=false,l=false,u=false,d=false;
		for(int j=0; j<t; j++){
			if(i!=j){
				// Matches x-coordinates
				if(v[i].first==v[j].first){
					if(v[i].second < v[j].second){
						u = true;
					} else if(v[i].second > v[j].second){
						d = true;
					}
				}
				// Matches y-coordinates
				if(v[i].second == v[j].second){
					if(v[i].first < v[j].first){
						r = true;
					}else if(v[i].first > v[j].first){
						l = true;
					}
				}
			}
		}
		if(u==true && d==true && r==true && l==true){
			count++;
		}
	}
	cout << count << endl;
	return 0;
}