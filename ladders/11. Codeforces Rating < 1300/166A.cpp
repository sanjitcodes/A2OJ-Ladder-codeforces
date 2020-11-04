// Name : Rank List
#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
#define ll long long
#define MOD 1000000007
using namespace std;

struct hash_pair { 
    template <class T1, class T2> 
    size_t operator()(const pair<T1, T2>& p) const
    { 
        auto hash1 = hash<T1>{}(p.first); 
        auto hash2 = hash<T2>{}(p.second); 
        return hash1 ^ hash2; 
    } 
};

bool compare(const pair<int,int> a, const pair<int,int> b){
	if(a.first==b.first){
		return a.second < b.second;
	}
	return a.first > b.first;
}
int main(){
	int n, k;
	int x,y;
	vector<pair<int,int> > v;
	cin >> n >> k;
	for(int i=0; i<n; i++){
		cin >> x >> y;
		v.push_back({x,y});
	}	
	sort(v.begin(), v.end(), compare);
	for(auto p : v){
		// cout << p.first << " " << p.second << "\n";
	}
	unordered_map<pair<int,int>, int, hash_pair> mp;
	for(auto p: v){
		mp[p]++;
	}
	int count = 0;
	for(auto p: v){
		count++;
		if(count==k){
			cout << mp[p] << endl;
		}
	}

	return 0;
}