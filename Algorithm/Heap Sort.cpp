//Heap Sort(max-heap)
#include<iostream>
#include<cmath>
using namespace std;

void print(int A[],int length){
	int p=0;
	for(int i=0;1;i++){
		if(length>pow(2,i)-1&&length<=pow(2,i+1)-1)
		{p=i+1;break;}
	}
	cout<<"The depth is "<<p<<endl;
	for(int k=pow(2,p-1)-4;k>0;k--){
	cout<<" ";
	}

	for(int i=0,j=1;i<length;i++){
		cout<<A[i]<<" ";
		if((i+1)==(pow(2,j)-1))
			{cout<<endl;
			j++;
			for(int k=pow(2,(p-j))-1;k>0;k--){
				cout<<" ";
			}
			}
	}
	cout<<endl;
}

//swap two variables
void swap(int& a,int& b){
	int tem=a;
	a=b;
	b=tem;
}

//return the parent number of the element i
int parent(int i){
	return (int)floor((i+1)/2)-1;
}

//return the left child number of the element i(if have)
//or return 0 to show that i doesn't own a left child
int left(int i){
	//if(2*i<=heap_length)
		return 2*(i+1)-1;
	//else return 0;
}

//return the right child number of the element i(if have)
//or return 0 to show that i doesn't own a right child
int right(int i){
	//if(2*i+1<=heap_length)
		return 2*(i+1);
	//else return 0;
}

//to maintain the max-heap property
void Max_heapify(int A[],int i,int heap_length){
	int l=left(i),
		r=right(i),
		largest;
	if(l<=heap_length&&A[i]<A[l])
		largest=l;
	else largest=i;
	if(r<=heap_length&&A[largest]<A[r])
		largest=r;
	if(largest!=i)
	{swap(A[i],A[largest]);
	print(A,8);
	cout<<"largest="<<largest<<endl;
	Max_heapify(A,largest,heap_length);}
}

//to build a max-heap
void Build_max_heap(int A[],int length){
	for(int i=(int)floor(length/2)-1;i>=0;i--)
		{cout<<"i="<<i<<endl;
	Max_heapify(A,i,length);}
}

//heap sort
void heapsort(int A[],int length){
	int heap_length=length-1;
	Build_max_heap(A,length);
	for(int i=length-1;i>=1;i--){
		swap(A[0],A[i]);
		heap_length--;
		Max_heapify(A,0,heap_length);
	}
}



int main(){
	int A[8]={1,6,5,4,2,7,3,8},
		n=sizeof(A)/sizeof(int);//the length of A.
	print(A,n);
	heapsort(A,n);
	print(A,n);
	system("pause");
}
