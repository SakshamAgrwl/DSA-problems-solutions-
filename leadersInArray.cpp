#include<bits/stdc++.h>
using namespace std;

void leaders(int arr[], int n){
	int curr_element = arr[n-1];
	cout<<curr_element<<" ";

	for(int i=n-2;i>=0;i--){
		if(curr_element<arr[i]){
			curr_element = arr[i];
			cout<<curr_element<<" ";
		}
	}

	sort(arr,arr+n);
}

int main(){

	int arr[] = {7, 10, 4, 10, 6, 5, 2};
	int n = sizeof(arr)/sizeof(int);

	leaders(arr,n);

	return 0;
}