#include<bits/stdc++.h>
using namespace std;

int secondLargest(int arr[], int n){

	int res = -1,largest=0;

	for(int i=1;i<n;i++){
		if(arr[i]>arr[largest]){
			res=largest;
			largest=i;
		}

		else if(res == -1 || arr[i]>arr[res]){
			res = i;
		}
	}
	return res;
}

int main(){

	int arr[] = {12,23,45,8,12};
	int n = sizeof(arr)/sizeof(int);

	cout<<secondLargest(arr,n);

	return 0;
}