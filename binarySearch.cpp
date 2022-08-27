#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int key){
	int start = 0;
	int end = n-1;

	while(start <= end){
		int mid = (start+end)/2;

		if(arr[mid] == key){
			return mid;
		}
		else if(arr[mid] > key){
			end = mid-1;
		}
		else{
			start = mid+1;
		}
	}

	return -1;
}

int main(){ 

	int arr[] = {12,23,21,34,56,78,54,65};
	int n = sizeof(arr)/sizeof(int);

	int key;
	cin>>key;

	int index = binarySearch(arr,n,key);

	if(index != -1){
		cout<<key<<" is found at index "<< index <<endl;
	}
	else{
		cout<<key<< " not found "<<endl;
	}

	return 0;
}