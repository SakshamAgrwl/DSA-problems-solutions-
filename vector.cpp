#include<iostream>
#include<vector>
using namespace std;

vector<int> sortingWithComparator(vector<int> arr, bool flag){
    int n = arr.size();
    if(flag == 1){
        reverse(arr,arr+n);
    }
    else{
        sort(arr,arr+n);
    }
    
}

int main(){

	//Demo vector
	vector<int> arr ={10,12,41,45,78};


	//push back(13)
	// arr.push_back(13);
    sortingWithComparator(arr,flag);
	//print all vector elements
	for(int i=0;i<arr.size();i++){
		cout<<arr[i]<<" ";
	}

	//size of vector
	cout<<arr.size()<<endl;

	//capacity of vector
	cout<<arr.capacity()<<endl;

	return 0;
}