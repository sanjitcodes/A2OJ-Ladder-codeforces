// Name : Parallepiped
#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#define ll long long
#define MOD 1000000007
using namespace std;

int main(){
	int a,b,c;
	cin >> a >> b >> c;
	int x = sqrt(a*b/c);
	int y = sqrt(b*c/a);
	int z = sqrt(c*a/b);
	cout << 4*(x+y+z) << "\n";
	return 0;
}