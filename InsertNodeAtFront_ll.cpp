#include<bits/stdc++.h>
using namespace std;

//insert node at front

void push(Node* head_ref, int new_data){

	//1.create a new node
	Node* new_node = new Node();

	//2.put in the data
	new_node->data = new_data;

	//3. assign next of new node to head
	new_node->next = head_ref;

	//4. assign head to new node
	head_ref = new_node;

}