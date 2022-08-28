#include<bits/stdc++.h>
using namespace std;

class Node{

	public:
		Node* next;
		int data;
};

//insert at front
void push(Node** head_ref, int new_data){

	Node* new_node = new Node();
	new_node->data = new_data;

	new_node->next = *head_ref;

	(*head_ref) = new_node;
}

void insertInMiddle(Node* prev_node, int new_data){

	//check if prev_node is null
	if(prev_node == NULL){
		cout<<"Previous node cannot be null";
		return;
	}

	Node* new_node = new Node();

	new_node->data = new_data;

	new_node->next = prev_node->next;

	prev_node->next = new_node;

}

void append(Node** head_ref, int new_data){

	//Create a new node
	Node* new_node = new Node();

	Node* last = *head_ref;

	new_node->data = new_data;
	new_node->next = NULL;

	if(*head_ref == NULL){
		*head_ref = new_node;
		return;
	}

	while(last->next != NULL){
		last = last->next;
		
	}

	last->next = new_node;
	return;
}

void printList(Node *node){

	while(node != NULL){
		cout<<" "<<node->data;
		node = node->next;
	}
}

int main(){

	Node* head = NULL;

	append(&head,6);

	push(&head,7);

	push(&head,1);

	append(&head,4);

	insertInMiddle(head->next,8);

	cout<<"Created Linked List is: ";
	printList(head);

	return 0;
}