#include<bits/stdc++.h>
using namespace std;

int main(){

	string str;

	int n=5;
	vector<string>sarr;
	string temp;

	while(n--){
		getline(cin,temp);
		sarr.push_back(temp);
	}

	for(string x: sarr){
		cout<<x<<",";
	}

	return 0;
}