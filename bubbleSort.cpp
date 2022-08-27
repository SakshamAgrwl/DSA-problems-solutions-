#include<bits/stdc++.h>
using namespace std;


void bubble_sort(int rrr[], int n){

	for(int i=1;i<n-1;i++){
		for(int j=0;j<=n-i-1;j++){
			if(rrr[j]>rrr[j+1]){
				swap(rrr[j],rrr[j+1]);
			}
		}
	}
}

int main(){
	int rrr[] = {12,23,-32,78,41,21,20};
	int n = sizeof(rrr)/sizeof(int);

	bubble_sort(rrr,n);

	for(auto x: rrr){
		cout<<x<<",";
	}

	return 0;
}