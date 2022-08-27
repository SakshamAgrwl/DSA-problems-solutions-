// //In selection sort, we will create a new empty array 
// and give it size as the largest element in the original array
// Then we will insert original elements in new empty array at the index
// of the value present in original array.
// After that we will insert new array elements at the ith index in original
// array which is equal to the value


#include<bits/stdc++.h>
using namespace std;

void countingSort(int arr[], int n){
	int largest = -1;

	for(int i=0;i<n;i++){
		largest = max(largest,arr[i]);
	}

	//Create a dynamic array/vector
	//assign the size of vector as largest+1 and assign all values 
	//as 0

	vector<int> frequency(largest+1,0);

	//update the frequency array
	for(int i=0;i<n;i++){
		frequency[arr[i]]++;
	}

	//put back the elemnts into original array

	int j=0;
	for(int i=0;i<=largest;i++){
		//while the count of element in frequency array is >0
		while(frequency[i]>0){
			arr[j] = i;
			frequency[i]--;
			j++;
		}
	}

	return;
}

int main(){
	int arr[] = {5,8,3,1,1,6};
	int n = sizeof(arr)/sizeof(int);

	countingSort(arr,n);

	for(auto x: arr){
		cout<<x<<",";
	}

	return 0;
}