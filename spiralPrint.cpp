#include<bits/stdc++.h>
using namespace std;

void spiralPrint(int arr[][100], int n, int m){

	int start_row = 0;
	int start_column = 0;
	int end_row = n-1;
	int end_column = m-1;

	while(start_row<=end_row & start_column<=end_column){

		for(int i=start_column;i<end_column;i++){
			cout<<arr[start_row][i]<<" ";
		}

		for(int i=end_column+1;i<=end_row;i++){
			cout<<arr[i][end_column]<<" ";
		}

		for(int i=end_row-1;i>=start_column;i--){
			if(start_row == end_row){
				break;
			}
			cout<<arr[end_row][i]<<" ";
		}

		for(int i=end_row-1;i>=start_row;i--){
			if(start_column == end_column){
				break;
			}
			cout<<arr[i][start_column]<<" ";
		}
	}

	start_row++;
	end_column--;
	start_column++;
	end_row--;
}

int main(){

	//print in spiral form
	int arr[][10] = { {1, 2, 3, 4},
					  {12, 13, 14, 5},
					  {11, 16, 15, 6},
					  {10, 9, 8, 7}};

	int n=4,m=4;

	spiralPrint(arr,n,m);

	return 0;

}