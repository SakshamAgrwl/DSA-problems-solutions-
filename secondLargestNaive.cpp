#include<bits/stdc++.h>
using namespace std;

int largestElement(int arr[], int n){

	int largest=0;

	for(int i=0;i<n;i++){
		if(arr[i]>arr[largest]){
			largest=i;
		}
	}

	return largest;
}

int secondLargestElement(int arr[], int n){

	int largest = largestElement(arr,n);
	int res = -1;

	for(int i=0;i<n;i++){
		if(arr[i] != arr[largest]){
			if(res == -1){
				res = i;
			}
			else if(arr[i]>arr[res]){
				res=i;
			}
		}
	}
	return res;
}

int main(){

	int arr[] = {12,32,5,67,89};
	int n = sizeof(arr)/sizeof(int);

	cout<<largestElement(arr,n)<<endl;
	cout<<secondLargestElement(arr,n)<<endl;


	return 0;
}