#include<bits/stdc++.h>
using namespace std;

void insertInMiddle(Node* prev_node, int new_data){

	if(prev_node == NULL){
		cout<<"The previous node cannot be null";
		return;
	}

	//create a new node
	Node* new_node = new Node();

	//put in data
	new_node->data = new_data;

	//assign previous node next to new node next
	new_node->next = prev_node->next;

	//assign prev node next to new node;
	prev_node->next = new_node;
}
