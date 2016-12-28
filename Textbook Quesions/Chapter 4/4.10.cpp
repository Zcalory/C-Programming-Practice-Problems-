//4.10
//Question: Assuming that there is an array whose member is in an increasing order, 
//write a function that input a number between the maximum and minimum and call a funtion insert this number into the array by excluding the maxmium number and keep the increasing order.

#include<iostream>
using namespace std;
//the length of the array is 15.
const int LENGTH =15;
//the function of inserting a number according to the requirement
void insert(int num,int []);
//show the maxmium of an array
int max(int []);
//show the minimun of an array
int min(int []);
//show all the member of an array
void show(int []);

int main(){
	int a[LENGTH]={3,9,18,22,49,59,66,79,81,92,111,136,149,159,180};
	int num;
	show(a);
	while(1){
	cout<<"Please input a number between the maxmium and minimum of the array:";
	cin>>num;
	//make sure that the number is in the suitable range
	if(num>=min(a)&&num<=max(a))
		break;
	else 
		cout<<"Your input number is out of range, please input a suitable number."<<endl;
	}
	insert(num,a);
	cout<<"The result is:"<<endl;
	show(a);
	system("pause");
}

void show(int a[]){
	cout<<"a[]:"<<endl;
	for(int i=0;i<15;i++){
		cout<<a[i]<<"\t";
		if(i%5==4) cout<<endl;
	}
}

int max(int a[]){
	int tem=a[0];
	for(int i=1;i<15;i++){
		if(a[i]>tem)
			tem=a[i];
	}
	return tem;
}

int min(int a[]){
	int tem=a[0];
	for(int i=1;i<15;i++){
		if(a[i]<tem)
			tem=a[i];
	}
	return tem;
}

void insert(int num,int a[]){
	//1. Find the position of the new number
	int i=0;
	for(;i<LENGTH;i++){
		if(num>=a[i]&&num<=a[i+1])
		{i++;break;}
	}
	//2. Exclude the maxmium number
	for(int j=LENGTH-1;j>i;j--){
		a[j]=a[j-1];
	}
	//3. 
	a[i]=num;
}
