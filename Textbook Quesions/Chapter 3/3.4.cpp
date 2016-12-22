//3.4
//Question: Writing an random number generator.
#include<iostream>
#include<ctime>
using namespace std;
int rk(int k){
	if(k>0)
		return ((25173*rk(k-1)+13849)%65536);
	else return (rand()%100);
}
int main(){
	cout<<rk(3)<<"\t"<<rk(2)<<"\t"<<rk(1)<<"\t"<<rk(0)<<endl;
	system("pause");
}
