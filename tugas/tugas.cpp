#include <iostream>
#include <string>
using namespace std;

//NOde class representing a single node in the linked list
class Node {
public:
	int data;
	Node* next;

	Node() {
		next = NULL;
	}
};

// stack class
class Stack {
private:
	Node* top;	// pointer to the top node of the stack

public:
	Stack() {
		top = NULL; // initialize the stack with a null top pointer
	}
};

// push operation: insert an element onto the top of stack
int push(int value) {
	Node* newNode = new Node();
	newNode->data = value;
	newNode->next = top;
	top = newNode;
	cout << "Push value: " << value << endl;
	return value;

}

// pop operation: 
void pop() {
	if (isEmpty()) {
		cout << "Stack is Empty." << endl;
	}
	cout << "Popped value: " << top->data << endl;
}

void peek() {
	if (top == NULL) {
		cout << "List is empty." << endl;
	}
}
