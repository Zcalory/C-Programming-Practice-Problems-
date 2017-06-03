//Define the node of the linked list

#ifndef  HEAD

#define HEAD

struct Node
{
	int data;
	Node *next;
};

typedef struct Node *head;
typedef head List;
typedef head Last;
typedef head Position;
#endif  //规避重定义问题

List CreatList();
List CreatList(int v);
List MakeEmpty(List L);
bool IsEmpty(List L);
void Add(int value, List &L);
void Insert(int value, Position p, List L);
void Delete(int value, List L);
Position GetPosition(int value, List L);
Position GetPreviousPosition(int value, List L);
Position GetPreviousPosition(Position p, List L);
void ShowList(List L);
Last FindListLast(List L);
