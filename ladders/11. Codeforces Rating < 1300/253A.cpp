// Name : Boys and Girls
#include <iostream>
#include <algorithm>
#include <vector>
#define ll long long
#define MOD 1000000007
using namespace std;

int main(){
	freopen("input.txt","r",stdin); 
	freopen("output.txt","w",stdout);
	int b,g;
	cin >> b >> g;
	char c = (b>g)?'B':'G';
	string str;
	if(c=='B'){
		bool run = true;
		while(run){
			if(b>0){
				cout << "B";
				b--;
			}
			else{
				run = false;
			}

			if(g>0){
				cout << "G";
				g--;
			}
			else{
				run = false;
			}
		}
		while(b--){
			cout << "B";
		}
	}
	else{
		bool run = true;
		while(run){
			if(g>0){
				cout << "G";
				g--;
			}
			else{
				run = false;
			}

			if(b>0){
				cout << "B";
				b--;
			}
			else{
				run = false;
			}
		}
		while(g--){
			cout << "G";
		}
	}
	cout << "\n";
	return 0;
}