#include<iostream>
using namespace std;

//Define the node of the linked list
struct Node
{
	int data;
	Node *next;
};

typedef struct Node *head;
typedef head List;
typedef head Last;

List MakeEmpty(List L);
bool IsEmpty(List L);
void Add(int value, List L);
List CreatList();
void ShowList(List L);
Last FindListLast(List L);




int main() {
	List L=CreatList();
	Add(6, L);
	ShowList(L);
	system("pause");
}


//Create an linked list 
List CreatList() {
	Node *head;
	head =new Node;
	cout << "Input the data value of the head" << endl;
	cin >> head->data;
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
	if (L->next == NULL)
		return L;
	else L = L->next;
}

//Add one element at the end of the linked list
//value id the data of that element
void Add(int value, List L) {
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
	List tem = L,tem2;
	while (tem) {
		tem2 = tem;
		tem = tem->next;
		delete tem2;
	}
	L ->next = NULL;
	return L;
}
