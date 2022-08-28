#include<bits/stdc++.h>
using namespace std;

void append(Node** head, int new_data){

	//1.create a new node
	Node new_node = new Node();

	//2. assign data to new node
	new_node->data = new_data;

	//3.make last node as pointer to head
	Node* last  = *head;

	//4. make next of new node as null
	new_node->next = NULL:

	if(*head == NULL){
		*head = new_node;
		return;
	}

	//5. traverse till the last node
	while(last->next != NULL){
		last = last->next;
	}

	//6.assign next node of last to new node
	last->next = new_node;
	return;


}