//Insertion sort
//Sorting numbers in a increasing order
#include<iostream>
using namespace std;

void print(int A[]){
	for(int i=0;i<10;i++){
		cout<<A[i]<<'\t';
	}
	cout<<endl;
}


int main(){
	int A[]={10,6,7,1,5,3,9,2,8,4};
	int key,j,n=sizeof(A)/sizeof(int); // the length of array A.
	
	print(A);
	for(int i=1;i<n;i++){
		key=A[i];
		for(j=i-1;j>=0;j--){
			if(A[j]>key)
				A[j+1]=A[j];
			else break;
		}
		A[j+1]=key;
		print(A);
	}
	//print(A);
	system("pause");
}
