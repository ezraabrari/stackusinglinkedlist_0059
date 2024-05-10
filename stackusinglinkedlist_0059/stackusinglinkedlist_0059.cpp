#include <iostream>
using namespace std;

class Node {
public:
	int data;
	Node* next;

	Node() {
		next = NULL;
	}
};

class Stack {
private:
	Node* Top;
public:
	Stack() {
		Top = NULL;
	}

	int push(int value) {
		Node* newNode = new Node();
		newNode->data = value;
		newNode->next = Top;
		Top = newNode;
		cout << "Push Value : " << value << endl;
		return value;
	}
};

void pop() {
	if (isEmpty()) {
		cout << "stack is empty." << endl;
	}
}