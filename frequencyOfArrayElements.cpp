#include<bits/stdc++.h>
using namespace std;


void countFreq(int nums[], int n){

	unordered_map<int,int> mp;

	for(int i=0;i<n;i++){
		mp[nums[i]]++;
	}

	// to print the count of elements in same order as mentioned in input
	//follow below approach

	for(int i=0;i<n;i++){
		if(mp[nums[i]]!=-1){

			cout<<nums[i]<<" "<<mp[nums[i]]<<endl;
			// cout<<mp->first<<" "<<mp->second;
			mp[nums[i]] = -1;
		}
	}
}

int main(){

	int nums[] = {10, 20, 20, 10, 10, 20, 5, 20 }; 
	int n = sizeof(nums)/sizeof(int);
	countFreq(nums,n);

	return 0;



}