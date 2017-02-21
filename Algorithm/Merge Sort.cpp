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

void merge(int A[],int p,int q,int r){
	 int n1=q-p+1,
		n2=r-q,
		*A1=new int[n1],
		*A2=new int[n2],
		i=0,
		j=0;
	 for (int i=0;i<=n1-1;i++){
		A1[i]=A[p+i];
	 }
	 for(int j=0;j<=n2-1;j++){
		 A2[j]=A[q+1+j];
	 }
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
