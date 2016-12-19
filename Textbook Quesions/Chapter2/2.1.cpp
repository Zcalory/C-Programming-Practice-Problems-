//2.1
//Question: Input the score of a student, outputs "very good" if it is larger than 85; outputs "good" if it is between 60 and 85; outputs "no good" if it is less than 60.

#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"Please input the score of a student:";
	cin>>num;
	if(num>85)
		cout<<"very good"<<endl;
	else if(num>60&&num<85)
		cout<<"good"<<endl;
	else cout<<"no good"<<endl;
	system("pause");
}
