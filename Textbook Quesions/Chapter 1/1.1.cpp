//Question: Input a 3-digit integer and output it in a inverted way. 

#include<iostream>
using namespace std;
int main(){
	int a,b;
	//using while to make sure that the input number is a valid 3-digit integer
	while(1){
	cout<<"Please input a 3-digit integer:";
	cin>>a;
	if(a>99&&a<1000) break;
	else cout<<"The input number is out of valid range."<<endl;
	}
	//Obtain the inverted number.
	b=100*(a%10)+10*(a/10%10)+a/100;
	cout<<"The inverted number is:"<<b<<endl;
	system("pause");
}
