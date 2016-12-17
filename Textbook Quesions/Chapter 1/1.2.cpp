//1.2
//Question: Input the coordinate of a point(X,Y axis value) in a 2-D plane. 
//If the point in the square area that -2<x<2 -2<y<2 ,output 1, else output 0.

#include<iostream>
using namespace std;
int main(){
	int x,y;
	cout<<"Please input the coordinate of a point:"<<endl;
	cin>>x>>y;
	cout<<"Output:"<<(-2<x&&x<2&&-2<y&&y<2)<<endl;
	system("pause");
}
