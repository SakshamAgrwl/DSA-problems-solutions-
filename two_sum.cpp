#include<bits/stdc++.h>
using namespace std;

vector<int> pairs(int arr[],int n, int target){


	unordered_map<int,int> mp;
	vector<int> ans;

	for(int i=0;i<n;i++){
		mp[arr[i]]++;

		int temp = target - arr[i];
		if(mp.find(temp) != mp.end()){
			// return {mp[temp],i};
			ans.push_back(mp[temp]);
			ans.push_back(i);
			mp[arr[i]] = i;
		}
	}
	return ans;

} 


int main(){

	int arr[] = {10, 20, 50,30};
	int n = sizeof(arr)/sizeof(int);
	int target = 70;

	cout<<pairs(arr,n, target);

	return 0;
}