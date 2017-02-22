//Quick Sort
#include <stdio.h> 
#include <iostream> 
#include <time.h> 
using namespace std; 


//Output a random number ranging from min - max
int random(int min,int max){
	srand( (unsigned)time(0));//srand()函数产生一个以当前时间开始的随机种子.
							  //应该放在for等循环语句前面 不然要很长时间等待
	return rand()%(max-min+1)+min;
}

//swap two variables
void swap(int& a,int& b){
	int tem=a;
	a=b;
	b=tem;
}

void print(int A[],int length){
	for(int i=0;i<length;i++){
		cout<<A[i]<<'\t';
	}
	cout<<endl;
}

//divide the array into two arrays with different values
int partition(int A[], int p,int r){
	int random_x=random(p,r),//randomly choose a number as the satellite.
		x=A[random_x],
		i=p-1;
	swap(A[random_x],A[r]);
	for(int j=p;j<=r-1;j++){
		if(A[j]<x)
			{i++;
		swap(A[i],A[j]);}}
	swap(A[i+1],A[r]);
	cout<<"A[r]="<<A[i+1]<<endl;
	print(A,8);
	return i+1;

}

//main process of quick sort
void quicksort(int A[],int p,int r){
	cout<<"p="<<p<<"  r="<<r<<endl;
	if(p<r)
		{int q=partition(A,p,r);
		quicksort(A,p,q-1);
		quicksort(A,q+1,r);}
}

int main() 
{         
	int A[8]={1,6,5,4,2,7,3,8},
		n=sizeof(A)/sizeof(int);//the length of A.
	print(A,n);
	quicksort(A,0,7);
	print(A,n);
	system("pause");
} 
