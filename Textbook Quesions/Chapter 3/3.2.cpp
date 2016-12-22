//3.2
//Question: Input m,n,p and calculate s=[(1+2+3+...+m)+(1^3+2^3+...+n^3)]/(1^5+2^5+...+p^5)

#include<iostream>
#include<cmath>
using namespace std;
//define the function
double fs (int m,int n, int p);
int main(){
	int m,n,p;
	cout<<"Please input m,n and p:";
	cin>>m>>n>>p;
	cout<<"s=:"<<fs(m,n,p)<<endl;
	system("pause");
}

double fs (int m,int n, int p){
	double tem1=0,tem2=0;
	//calculate (1+2+3+...+m)
	for(int i=1;i<=m;i++){
		tem1+=i;
	}
	//calculate (1^3+2^3+...+n^3)
	for(int i=1;i<=n;i++){
		tem1+=pow(i,3);
	}
	//calculate (1^5+2^5+...+p^5)
	for(int i=1;i<=p;i++){
		tem2+=pow(i,5);
	}
	return tem1/tem2;
}
