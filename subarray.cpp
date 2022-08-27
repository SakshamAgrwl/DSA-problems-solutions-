#include<iostream>
using namespace std;

void printSubarray(int arr[], int n){

	int largest_sum = 0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			for(int k=i;k<=j;k++){
				cout<<arr[k]<<",";
				// sum+=arr[k];
				// cout<<sum;
			}
			cout<<endl;
		}
	}
}


int main(){

	int arr[] = {10,20,30,40,50,60};
	int n = sizeof(arr)/sizeof(int);

	printSubarray(arr,n);

	return 0;
}