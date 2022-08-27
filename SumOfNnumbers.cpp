#include<bits/stdc++.h>
using namespace std;

int sumOfN(int n){

	if(n==0){
		return 0;
	}

	int sum = sumOfN(n-1);

	return n+sum;
}

int main(){

	int n;
	cin>>n;

	cout<<sumOfN(n);

	return 0;
}