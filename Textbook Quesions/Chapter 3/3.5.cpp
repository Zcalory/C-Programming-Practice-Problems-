//3.5
//Quesion: Using recursion to implement Legendre Polynomials.

#include<iostream>
using namespace std;
double pnx (int x,int n);
int main(){
	int x,n;
	cout<<"Please input x and n:";
	cin>>x>>n;
	cout<<"Pn(x)="<<pnx(x,n)<<endl;
	system("pause");
}

double pnx (int x,int n){
	if(n==0)
		return 1;
	else if(n==1)
		return x;
	else return ((2*n-1)*pnx(x,n-1)-(n-1)*pnx(x,n-2))/n;
}
