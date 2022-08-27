#include<iostream>
using namespace std;

int linearSearch(int arr[], int n, int key){

	for(int i=0;i<n;i++){
		if(arr[i] == key){
			return i;
		}
	} 
	//out of the loop
	return -1;
}

int main(){

	int arr[] = {10,20,23,32,3,56,78,8};
	int n = sizeof(arr)/sizeof(int);

	int key;
	cin>>key;

	int index = linearSearch(arr,n,key);
	if(index!=-1){
		cout<<key<<" is present at index "<< index <<endl;
	}
	else{
		cout<<key<< " not found "<<endl;
	}

	return 0;
}