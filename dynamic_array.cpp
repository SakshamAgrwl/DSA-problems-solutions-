#include<bits/stdc++.h>
using namespace std;

int main(){

	int n;
	cin>>n;

	//Dynamic Array
	int *arr = new int[n];

	cout<<arr<<endl;

	for(int i=0;i<n;i++){
		arr[i] = i;
		cout<<arr[i]<<" ";
	} 
	cout<<endl;

	//delete the array

	delete [] arr;

	cout<<arr<<endl;

	cout<<arr[1]<<endl;

	return 0;
}