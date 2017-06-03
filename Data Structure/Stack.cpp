//Using linked list to build Stack


#include<iostream>
#include"Stack.h"
//#include"Linked_List.h"
using namespace std;

//Pop Stack;
void Pop(Stack S) {
	if (S != NULL) {
		Node *n = FindListLast(S);
		Position p = GetPreviousPosition(n, S);
		cout << "Pop: " << n->data << endl;
		p->next = NULL;
		delete n;
	}
	else {
		cout << "The stack is empty!" << endl;
	}
}

//Push Stack
void Push(datatype d,Stack S) {
	Element e=new Node;
	e->data = d;
	e->next = NULL;
	Element l = FindListLast(S);
	l ->next = e;
	cout << "Push: " << d << endl;
}

//Show the stack
void ShowStack(Stack S) {
	ShowList(S->next);
}

//define the header of the stack equals 0
Stack CreateStack() {
	Stack S = CreatList(0);
	return S;
}

//return the Top data of the Stack
datatype Top(Stack S) {
	Position p = FindListLast(S);
	return p->data;
	delete p;
}