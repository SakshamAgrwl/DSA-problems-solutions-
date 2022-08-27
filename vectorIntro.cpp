#include<iostream>
#include<vector>
using namespace std;

int main(){

	//demo vector
	vector<int> arr = {1,2,3,4,5};

	//pop_back
	arr.pop_back();

	//push_back
	arr.push_back(16);

	//print all the elements
	// for(int i=0;i<arr.size();i++){
	// 	cout<<arr[i]<<" ";
	// }

	//print all elements using for each
	
	for(int x:arr){
		cout<<x<<" ";
	}
	cout<<endl;
	
	

	// //capacity of vector
	// cout<<arr.capacity()<<endl;

	// //size of the vector
	// cout<<arr.size();


	return 0;
}