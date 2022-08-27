#include<bits/stdc++.h>
using namespace std;

int largestSubarraySum1(int arr[], int n){

	int largest_sum = 0;

	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){

			int subarray_sum = 0;
			for(int k=i;k<=j;k++){
				subarray_sum += arr[k];
			}

			//put a check if subarraysum > largest_sum
			largest_sum = max(largest_sum,subarray_sum);
		}
	}

	return largest_sum;
}

int main(){

	int arr[] = {-2,3,4,-1,5,-12,6,1,3};
	int n = sizeof(arr)/sizeof(int);

	cout<<largestSubarraySum1(arr,n);

	return 0;
}