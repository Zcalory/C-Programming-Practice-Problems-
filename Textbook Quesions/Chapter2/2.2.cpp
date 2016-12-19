//2.2
//Question: Input three integrals and outputs them in the increasing order.

#include<iostream>
using namespace std;
int main(){
	int a,b,c,tem;
	cout<<"Please input 3 integrals:";
	cin>>a>>b>>c;
	//Find the smallest number
	if(a>b)
		if(b>c)
		{tem=c; c=a;a=tem;}
		else
		{tem=b; b=a;a=tem;}
	else if(a>c)
		{tem=c;c=a;a=tem;}
	//Sort the other 2 numbers
	if(b>c)
		{tem=c; c=b;b=tem;}
	cout<<a<<"\t"<<b<<"\t"<<c<<endl;
	system("pause");
}
