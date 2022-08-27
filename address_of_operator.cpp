#include<bits/stdc++.h>
using namespace std;

int main(){
	int x = 10;
	float y = 10.10;

	cout<<&x<<endl;
	// cout<<&y<<endl;

	int *xptr = &x;
	cout<<xptr<<endl;
	cout<<&xptr<<endl;

	return 0;
}
