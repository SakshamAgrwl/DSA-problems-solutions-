#include<bits/stdc++.h>
using namespace std;

int main(){

	unordered_map<int,int> mp;

	for(int i=1;i<=3;i++){
		mp[i] = i+1;
	}

	for(auto q = mp.begin();q!=mp.end();q++){
		cout<<"Key is "<<q->first<<" and the value is "<<q->second<<endl;
	}

	return 0;
}