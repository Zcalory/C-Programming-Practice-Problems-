//1.3
//Question:Input three integers and Output the maximum (Using the conditional operator)

#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	cout<<"Please input three integers:"<<endl;
	cin>>a>>b>>c;
	cout<<"The maximum is:"<<(a>b?(a>c? a:c):(b>c? b:c))<<endl;
	system("pause");
}
