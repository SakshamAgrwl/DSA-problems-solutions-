#include <iostream>
using namespace std;

int maximum_subarray_sum(int arr[], int n){
	int csum = 0;
	int msum = 0;

	for(int i=0;i<n;i++){
		csum += arr[i];
		if(csum < 0){
			csum = 0;
		}
		msum = max(msum,csum);
	}

	return msum;
}

int main(){
	int arr[] = {-2,3,4,-1,5,-12,6,1,3};
	int n = sizeof(arr)/sizeof(int);

	cout<<maximum_subarray_sum(arr,n);

	return 0;
}