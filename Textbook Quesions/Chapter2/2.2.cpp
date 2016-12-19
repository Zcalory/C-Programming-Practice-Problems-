//2.2
//Question: Input the three lengths of sides. Judge whether they can shape a triangle, if can, output the kind of triangle.

#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	cout<<"Please input the three lengths of sides:";
	cin>>a>>b>>c;
	//Judge  whether they can shape a triangle
	if(a+b>c&&a+c>b&&b+c>a){
		//Judge the kind of triangle
		if(a==b&&b==c)
			//	Congruent triangle
			cout<<"A congruent triangle"<<endl;
		else
			if(a==b||b==c||a==c)
				//isosceles triangle
				cout<<"An isosceles triangle"<<endl;
			else 
				//gengral triangle
				cout<<"A general triangle"<<endl;}
	else
		//they cannot be a triangle
		cout<<"They cannot be a triangle."<<endl;
	system("pause");
}
