//Merge Sort
#include<iostream>
#include<cmath>
using namespace std;

template <class T>

int getArrayLen(T& array)

{

return (sizeof(array) / sizeof(array[0]));

}

void print(int A[],int length){
	for(int i=0;i<length;i++){
		cout<<A[i]<<'\t';
	}
	cout<<endl;
}

//Merge two parts of an array(two sections that was divided in the algorithm)
//p~(q-1) & q~r
void merge(int A[],int p,int q,int r){
	 int n1=q-p+1, //n1 is the length of the first part
		n2=r-q, //n2 is the length of the second part 
		*A1=new int[n1],  //set up two array to temporarily store the two parts
		*A2=new int[n2],
		i=0, //i and j are two nums to express the positions of A1 & A2  while merging two parts.
		j=0;
	//The following two for loops aim to put the value of A[] to A1 & A2.
	 for (int m=0;m<=n1-1;m++){
		A1[m]=A[p+m];
	 }
	 for(int n=0;n<=n2-1;n++){
		 A2[n]=A[q+1+n];
	 }
	//Merging two parts(A1 & A2)
	//if one of the array have been added up all(i==n1 or j==n2)
	//then the rest of the other one should be put to A[] in order.
	 for(int k=p;k<=r;k++){
		 if(i==n1)
		 {A[k]=A2[j];j++;}
		 else
			 if(j==n2)
				 {A[k]=A1[i];i++;}
			 else
				if(A1[i]<=A2[j])
					{A[k]=A1[i];i++;}
				else
					{A[k]=A2[j];j++;}
	 }

//at last, release the memories.
delete A1[];
delete A2[];
}

void merge_sort(int A[],int p ,int r){
	int q;
	if(p<r)
	{q=floor((p+r)/2);
	cout<<"q="<<q<<endl;
	merge_sort(A,p,q);
	//print(A,getArrayLen(A));
	merge_sort(A,q+1,r);
	//print(A,getArrayLen(A));
	merge(A,p,q,r);}
	else {cout<<"ERROR!"<<endl;}
