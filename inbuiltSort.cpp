#include<iostream>
#include<algorithm>
using namespace std;

bool comparator(int a, int b){
	return a < b;
}

int main(){

	int arr[] = {12,23,-2,3,56,0,2,1};
	int n=sizeof(arr)/sizeof(int);

	sort(arr,arr+n,comparator);
	for(int x : arr){
		cout<<x<<",";
	}

	cout<<endl;

	//to sort in descending order
	reverse(arr,arr+n);

	for(int x : arr){
		cout<<x<<",";
	}

	

	return 0;
}