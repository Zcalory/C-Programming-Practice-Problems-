//2.4
//Question: Input a score in the 100-point system and tranform them in the 5-level system according to the formula.

#include<iostream>
using namespace std;
int main(){
	int a;
	while(1){
	cout<<"Please input the score:";
	cin>>a;
	//confirm that the socre is in the valid range.
	if(a<=100&&a>=0)
		//valid
		break;
	else
		//invalid
		cout<<"the score is in the invalid range."<<endl;
	}
	//transform 
	if(a>=90)
		cout<<"A.\n";
	else
		if(a>=80)
			cout<<"B.\n";
		else
			if(a>=70)
				cout<<"C.\n";
			else
			if(a>=60)
				cout<<"D.\n";
			else
				cout<<"E.\n";
	system("pause");
}
