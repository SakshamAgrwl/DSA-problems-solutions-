#include<bits/stdc++.h>
using namespace std;


int deleteElement(int arr[], int n, int x){

	int i;

	for(i=0;i<n;i++){
		if(arr[i] == x){
			break;
		}
	}
	if(i==n){
		return n;
	}

	for(int j=i;i<n-1;j++){
		arr[j] = arr[j+1];
	}

}

int main(){

	int arr[] = {12,23,32,6,7,89};
	int n = sizeof(arr)/sizeof(int);
	int x = 6;

	deleteElement(arr,n,x);

	for(auto x: arr){
		cout<<x<<" ";
	}

	return 0;
}