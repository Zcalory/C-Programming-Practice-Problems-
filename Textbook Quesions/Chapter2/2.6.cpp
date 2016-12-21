//2.6
//Question: Input an integral and output all the prime factors of it.

#include<iostream>
using namespace std;
int main(){
	int a;
	cout<<"Please input an integral:";
	cin>>a;
	cout<<"The prime factors of this number are:"<<endl;
	for(int i=2;a>1;){
		if(a%i!=0)
			i++;
		else
			{a=a/i;cout<<i<<"\t";i=2;}

	}
	cout<<endl;
	system("pause");
}
