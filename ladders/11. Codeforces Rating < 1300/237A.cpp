// Name : Free Cash
#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
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
int main(){
	ll n,a,b;
	cin >> n;
	priority_queue< pair<int,pair<int,int> > > pq;
	unordered_map<pair<int,int>,int, hash_pair > mp;
	for(ll i=0; i<n; i++){
		cin >> a >> b;
		mp[{a,b}]++;
	}
	for(auto it=mp.begin(); it!=mp.end(); it++){
		pq.push({it->second,{(it->first).first,(it->first).second}});
	}
 	cout << pq.top().first << endl;
	return 0;
}