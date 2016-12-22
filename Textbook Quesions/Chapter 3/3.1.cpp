//3.1
//Question: Calculation an mathematical expression.

#include<iostream>
#include<cmath>
using namespace std;
//define the funtion
int fx (int x);
int main(){
	int a;
	cout<<"Please input x:";
	cin>>a;
	cout<<"y=:"<<fx(a)<<endl;
	system("pause");
}

int fx (int x){
	return sinh(1+sinh(x))/(sinh(2*x)+sinh(3*x));
}
