//Counting sort
#include<iostream>
using namespace std;

#define NUM 8;

void print(int A[], int length) {
	for (int i = 0; i<length; i++) {
		cout << A[i] << '\t';
	}
	cout << endl;
}

void countingsort(int A[], int B[], int length) {
	//Array C is used as an auxiliary storage
	int C[8] = { 0 };
	for (int i = 0; i < length; i++) {
		C[A[i]] += 1; //C[i] equals the number of element that equals i
	}
	for (int i = 1; i < length; i++) {
		C[i] += C[i - 1];//C[i] equals the number of element that less than or equals i
	}
	for (int i = length-1; i >= 0; i--) {
		{B[C[A[i]]] = A[i];
		C[A[i]]--; }
	}
	print(B, length);
}

int main() {
int A[8] = { 1,6,5,4,2,7,3,5 },
	B[8] = {0},
	n = sizeof(A) / sizeof(int);//the length of A.
	countingsort(A, B, n);
	system("pause");
}