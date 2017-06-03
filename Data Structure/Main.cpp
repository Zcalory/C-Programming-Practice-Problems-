#include<iostream>
#include"Linked_List.h"
#include "Stack.h"
using namespace std;

int main() {
/*	List L = CreatList();
	Add(2, L);
	Add(3, L);
	Add(4, L);
	ShowList(L);
	Insert(8, GetPosition(4, L), L);
	Insert(9, GetPosition(8, L), L);
	ShowList(L);
	Delete(3, L);
	ShowList(L);
	L = MakeEmpty(L);
	ShowList(L);*/

	Stack S = CreateStack();
	Push(2, S);
	Push(3, S);
	cout << "Top:" << Top(S) << endl;
	Pop(S);
	ShowStack(S);
	system("pause");
}