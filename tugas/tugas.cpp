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
	else {
		Node* current = top;
		while (current != NULL) {
			cout << current->data << " " << endl;
			current->next;
		}
		cout << endl;
	}
}

bool isEmpty() {
	return top == NULL;
}
};

int main() {
	Stack stack;

	int choice = 0;
	int value;

	while (choice != 5){
		cout << "1. Push\n";
		cout << "2. Pop\n";
		cout << "3. Peek\n";
		cout << "4. Exit\n";
		cout << "Eenter your choice: ";
		cin >> choice;

		switch(choice) {
		case 1:
			cout << "Enter the value to push: ";
			cin >> value;
			stack.push(value);
			break;
		case 2:
			if (!stack.isEmpty()) {
				stack.pop();
			}
			else {
				cout << "stack is empty. cannot pop." << endl;
			}
			break;
		case 3:
			if (!stack.isEmpty()) {
				stack.peek();
			}
			else {
				cout << "stack is empty. NO top value." << endl;
			}
			break;

		case 4:
			cout << "Exiting program. " << endl;

		}

}