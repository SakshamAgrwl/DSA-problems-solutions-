#include<bits/stdc++.h>
using namespace std;

//target=60
//arr = {10,20,30,40,70}

pair<int,int,int> tripletSum(vector<int>v, int target){
	int start =v[0];
	int l=1;
	int r = v.size()-1;

	while(l<r){
		remainder = target-start;
		if(v[l]+v[r]>remainder){
			r--;
		}
		else{
			l++;
		}
	}

}