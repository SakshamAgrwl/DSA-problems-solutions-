#include<bits/stdc++.h>
using namespace std;

void leftRotateByOne(int arr[], int n){

	int temp = arr[0];
	for(int i=0;i<n;i++){
		arr[i-1] = arr[i];
	}
	arr[n-1] = temp;
}

int main(){

	int arr[] = {12,23,43,22,10};
	int n = sizeof(arr)/sizeof(int);

	leftRotateByOne(arr,n);

	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}

	return 0;
}