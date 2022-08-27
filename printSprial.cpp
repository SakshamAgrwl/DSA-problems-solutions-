#include<bits/stdc++.h>
using namespace std;

void print(int arr[][10], int n,int m){
	 int start_row=0;
	 int end_column=m-1;
	 int end_row=n-1;
	 int start_column=0;

	 while(start_column<=end_column and start_row<=end_row){
	 	//start row
	 	for(int col=start_row;col<end_column;col++){
	 		cout<<arr[start_row][col]<<" ";
	 	}

	 	//end col
	 	for(int row=end_column+1;row<=end_row;row++){
	 		cout<<arr[row][end_column]<<" ";
	 	}

	 	//end row
	 	for(int col=end_row-1;col>=start_column;col--){
	 		if(start_row==end_row){
	 			break;
	 		}
	 		cout<<arr[end_row][col]<<" ";
	 	}

	 	//start column
	 	for(int row=end_row-1;row>=start_row;row--){
	 		//avoid duplicate printing of elements
	 		if(start_column==end_column){
	 			break;
	 		}
	 		cout<<arr[row][start_column]<<" ";
	 	}
	 }

	 //update the variables to print the inner spiral
	 start_row++;
	 start_column++;
	 end_row--;
	 end_column--;

}

int main(){

	//print in spiral form
	int arr[][10] = { {1, 2, 3, 4},
					  {12, 13, 14, 5},
					  {11, 16, 15, 6},
					  {10, 9, 8, 7}};

	int n=4,m=4;

	print(arr,n,m);

	return 0;

}