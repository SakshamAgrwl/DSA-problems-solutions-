#include<bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n){

	for(int i=1;i<=n-1;i++){
		int current = arr[i];
		int prev = i-1;

		while(prev>0 and arr[prev]>current){
			arr[prev+1] = arr[prev];
			prev = prev-1;
		}
		arr[prev+1] = current;

	}
	
}

int main(){
	int rrr[] = {12,23,-32,78,41,21,20};
	int n = sizeof(rrr)/sizeof(int);

	insertionSort(rrr,n);

	for(auto x: rrr){
		cout<<x<<",";
	}

	return 0;
}