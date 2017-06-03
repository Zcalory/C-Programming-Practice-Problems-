#include<iostream>
using namespace std;
#include"Linked_List.h"



//Create an linked list 
List CreatList() {
	Node *head;
	head =new Node;
	cout << "Input the data value of the head" << endl;
	cin >> head->data;
	head->next = NULL;
	return head;
}

List CreatList(int v) {
	Node *head;
	head = new Node;
	head->data=v;
	head->next = NULL;
	return head;
}

//Show all the value of the linked list
void ShowList(List L) {
	cout << "The list is shown as follows:" << endl;
	while (L)
	{
		cout << L->data << endl;
		L = L->next;
	}
}

//Find the last element of the list
Last FindListLast(List L) {
	Position tem;
	while (L)
	{
		if (L->next == NULL)
		{
			//cout << L->data << endl;
			tem = L;
			return tem;
		}
		else L = L->next;
	}
	return NULL;
}

//Add one element at the end of the linked list
//value id the data of that element
void Add(int value, List &L) {
	Node *new_n;
	new_n = new Node;
	new_n->data = value;
	new_n->next = NULL;
	Last l = FindListLast(L);
	l->next = new_n;
}

//Check whether the list is empty
bool IsEmpty(List L) {
	if (L->next == NULL)
		return true;
	else
		return false;
}

//Make the list empty
List MakeEmpty(List L) {
	List tem = L->next,tem2;
	while (tem) {
		tem2 = tem;
		tem = tem->next;
		delete tem2;
	}
	L ->next = NULL;
	return L;
}

//Get the position by the value
//if the value is not contained in the list,return NULL
Position GetPosition(int value, List L) {
	while (L) {
		if (L->data == value)
			return L;
		L = L->next;
	}
	cout << "Cannot find "<<value<<"in the list." << endl;
	return NULL;
}

//Get the previous element positon by the value
//if the value is not contained in the list,return NULL
Position GetPreviousPosition(int value, List L) {
	while(L){
		if (L->next != NULL&&L->next->data == value)
			return L;
		else L = L->next;
	}
		cout << "Cannot find "<<value<<"in the list." << endl;
	return NULL;
}

//Get the previous element position by the next element
//if the position is the header or not in the list ,return NULL
Position GetPreviousPosition(Position p, List L) {
	Node *tem=NULL;
	while (L) {
		if (L == p) {
			//cout << "Cannot find current positon in the list." << endl;
			return tem;
		}
		else
		{
			tem = L;
			L = L->next;
		}
	}
	return NULL;
}


//Insert an element after p
void Insert(int value, Position p, List L) {
	if (p == NULL)
		cout << "Invalid position,error." << endl;
	else
	{
		Node *n;
		n = new Node;
		n->data = value;
		n->next = p->next;
		p ->next = n;
	}
}

//Delete a element from the list
void Delete(int value, List L) {
	Node *n=GetPosition(value,L),
		*m=GetPreviousPosition(value,L);
	m->next = n->next;
	delete n;
}