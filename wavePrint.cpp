#include<bits/stdc++.h>
using namespace std;

vector<int> wavePrint(int n, int m, vector<vector<int>>arr){
	int i,j=m-1;
	int wave=1;
	vector<int> result;

	/*n = end row
	  m = end column
	  wave = 1 print downwards
	  wave=0 print upwards*/

	while(j>=0){

		if(wave == 1){
			for(int i=0;i<n;i++){
				result.push_back(arr[i][j]);
			}
			wave=0;
			j--;
		}
		else{
			for(int i=m-1;i>=0;i--){
				result.push_back(arr[i][j]);
			}
			wave=1;
			j--;
		}
	}

	return result;
}

int main(){

	vector<vector<int>> arr = {}
}