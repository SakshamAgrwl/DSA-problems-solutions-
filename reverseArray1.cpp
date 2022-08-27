#include<bits/stdc++.h>
using namespace std;

void reverseArray(int arr[], int n){

	int start = 0,end = n-1;
	while(start<=end){

		swap(arr[start],arr[end]);
		start++;
		end--;
	}
}

int main(){
	int arr[] = {12,23,45,66,77};
	int n = sizeof(arr)/sizeof(int);

	reverseArray(arr,n);

	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}

	return 0;
}