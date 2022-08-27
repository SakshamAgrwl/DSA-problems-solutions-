#include<bits/stdc++.h>
using namespace std;

string removeDuplicates(string s){
	set<char> ss(s.begin(),s.end());
	string ans;

	for(auto x: ss){
		ans.push_back(x);
	}

	return ans;
}