//Radix Sort
//to Sort English words(char)
#include<iostream>
#include<cmath>
using namespace std;

void print(char A[][3],int row) {
	for (int i = 0; i < row; i++) {
		for(int j=0;j<3;j++){
			cout << A[i][j];
		}
			cout << endl;
	}
}

void swap(char& a, char& b) {
	char tem = a;
	a = b;
	b = tem;
}

//swap two variables
void swap(int& a, int& b) {
	int tem = a;
	a = b;
	b = tem;
}

void swap_row(int A[][2],int row1,int row2) {
	for (int i = 0; i <= 1; i++) {
		swap(A[row1][i], A[row2][i]);
	}

}



//Using heap sort 
//return the parent number of the element i
int parent(int i) {
	return (int)floor((i + 1) / 2) - 1;
}

//return the left child number of the element i(if have)
//or return 0 to show that i doesn't own a left child
int left(int i) {
	//if(2*i<=heap_length)
	return 2 * (i + 1) - 1;
	//else return 0;
}

//return the right child number of the element i(if have)
//or return 0 to show that i doesn't own a right child
int right(int i) {
	//if(2*i+1<=heap_length)
	return 2 * (i + 1);
	//else return 0;
}

//to maintain the max-heap property
void Max_heapify(int A[][2], int i, int heap_length) {
	int l = left(i),
		r = right(i),
		largest;
	if (l <= heap_length&&A[i][0]<A[l][0])
		largest = l;
	else largest = i;
	if (r <= heap_length&&A[largest][0]<A[r][0])
		largest = r;
	if (largest != i)
	{
		swap_row(A,i,largest);
		//print(A, 8);
		//cout << "largest=" << largest << endl;
		Max_heapify(A, largest, heap_length);
	}
}

//to build a max-heap
void Build_max_heap(int A[][2], int length) {
	for (int i = (int)floor(length / 2) - 1; i >= 0; i--)
	{
		//cout << "i=" << i << endl;
		Max_heapify(A, i, length);
	}
}

//heap sort
void heapsort(int A[][2], int length) {
	int heap_length = length - 1;
	Build_max_heap(A, length);
	for (int i = length - 1; i >= 1; i--) {
		swap_row(A,0,i);
		heap_length--;
		Max_heapify(A, 0, heap_length);
	}
}

void radixsort(char A[][3] ,int times) {
	int tem[6][2];
	char B[6][3] = { 0 },
		C[6][3] = { 0 };
	for (int k = times-1; k>=0; k--) {

		for (int i = 0; i < 6; i++) {
			tem[i][0] = A[i][k];
			tem[i][1] = i;
		}
		heapsort(tem, 6);
		for (int i = 0; i < 6; i++) {
			cout << tem[i][1];
		}
		cout << endl;
		
		for (int i = 0; i < 6; i++) {
			for (int j = 0; j < 3; j++) {
				B[i][j] = A[tem[i][1]][j];
			}
			cout << i << "   " << tem[i][1] << endl;
		}
		for (int i = 0; i < 6; i++) {
			for (int j = 0; j < 3; j++) {
				C[i][j] = B[i][j];
			}
		};
		print(C, 6);
	}
	//Set A
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 3; j++) {
			A[i][j] = C[i][j];
		}
	};
}




int main() {
	char A[6][3] = { 'D','O','G','C','A','T','P','E','N','P','I','G','I','O','T','C','S','S' };
	print(A, 6);
	radixsort(A, 3);
	cout <<endl;
	print(A, 6);
	system("pause");
}
