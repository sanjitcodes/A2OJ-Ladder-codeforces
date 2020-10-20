// Name : Shooshuns and Sequence
#include <iostream>
#include <algorithm>
#include <vector>
#define ll long long
#define MOD 1000000007
using namespace std;

int main(){
	int n,k,ans_idx=0;
	cin >> n >> k;
	int ar[n];
	for(int i=0; i<n; i++) cin >> ar[i];	
	for(int i=n-1; i>=0; i--){
		if(ar[i]!=ar[n-1]){
			ans_idx = i+1;
			break;
		}
	}
	if(ans_idx<k){
		printf("%d\n",ans_idx);
	}else{
		printf("-1\n");
	}
	return 0;
}