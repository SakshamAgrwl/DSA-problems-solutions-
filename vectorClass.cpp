#include<iostream>
#include<vector>
using namespace std;

class Vector{

	//data members
	int *arr;
	int current_size;
	int max_size;

public:
	Vector(){
		current_size=0;
		max_size=1;
		arr = new int[ms];
	}

	void push_back(int d){
		//two cases
		if(current_size == max_size){
			//create a new array and delete the old one, double the capacity
			int *oldArr = arr;
			int max_size = 2*max_size;
			arr = new int[max_size];

			//copy the elements
			for(int i=0;i<current_size;i++){
				arr[i] = oldArr[i];
			}

			//delete
			delete [] oldArr;
		}
		arr[current_size] = d;
		current_size++;
	}

	void pop_back(){
		if(current_size>=0){
			current_size--;
		}
	}

	bool isEmpty(){
		return current_size==0;
	}
}