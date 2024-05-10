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
	void pop() {
		if (isEmpty()) {
			cout << "stack is empty." << endl;
		}
		cout << "popped value : " << Top->data << endl;
		Top = Top->next;
	}

	void peek() {
		if (Top == NULL) {
			cout << "list is empty. " << endl;
		}
		else {
			Node* current = Top;
			while (current != NULL) {
				cout << current->data << " " << endl;
				current = current->next;
			}
			cout << endl;
		}
	}

	bool isEmpty() {
		return Top == NULL;
	}
};

int main() {
	Stack stack;

	int choice = 0;
	int value;
}