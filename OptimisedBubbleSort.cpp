#include<bits/stdc++.h>
using namespace std;

void optimised_bubbleSort(int rrr[], int n){

	int i,j;
	bool swapped;

	for(int i=0;i<n-1;i++){
		swapped = false;
		//if swapped is false only then go to other loop
		for(int j=0;j<=n-i-1;j++){
			if(rrr[j]>rrr[j+1]){
				swap(rrr[j],rrr[j+1]);
				swapped = true;
			}
		}

		if(swapped = false){
			break;
		}
	}
}

int main(){
	int rrr[] = {12,23,-32,78,41,21,20};
	int n = sizeof(rrr)/sizeof(int);

	optimised_bubbleSort(rrr,n);

	for(auto x: rrr){
		cout<<x<<",";
	}

	return 0;
}