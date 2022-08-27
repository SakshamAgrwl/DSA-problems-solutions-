#include<bits/stdc++.h>
using namespace std;

int getIthBit(int n, int i){

	int mask = (1<<i);

	if((n&mask) > 0){
		return 1;
	}
	else if((n&mask) == 0){
		return 0;
	}
}

int main(){

	int n;
	cin>>n;
	int i;
	cin>>i;

	cout<<getIthBit(n,i);

	return 0;
}