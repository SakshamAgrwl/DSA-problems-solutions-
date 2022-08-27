#include<iostream>
using namespace std;

void reverseArray(int arr[], int n){
	int start = 0;
	int end = n-1;

	while(start < end){
		swap(arr[start], arr[end]);
		start+=1;
		end-=1;
	}
}

int main(){

	int arr[] = {12,23,4,5,6,74,7,8};
	int n = sizeof(arr)/sizeof(int);

	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;


	reverseArray(arr,n);

//after function
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}

	cout<<endl;
}