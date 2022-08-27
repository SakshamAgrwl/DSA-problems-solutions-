#include<bits/stdc++.h>
using namespace std;

int power_number(int n, int pow){
	if(pow==0){
		return 1;
	}

	int partialAns = power_number(n,pow-1);
	return n*partialAns;
}

int main(){
	int n,pow;
	cin>>n;
	cin>>pow;

	cout<<power_number(n,pow);

	return 0;

}