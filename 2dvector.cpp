#include<iostream>
#include<vector>
using namespace std;

int main(){

	vector<vector<int>> arr = {
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};

	//update an element in vector
	arr[0][1] +=10;

	//print all vector elements
	for(int i=0;i<arr.size();i++){
		for(int x: arr[i]){
			cout<<x<<" ";
		}
		cout<<endl;
	}

	return 0; 

}