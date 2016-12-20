//2.5
//Question: Writing a program to simulate the game of scissors, rock and cloth. 
//Gamers input alternatively and the program will show the result of the game.

#include<iostream>
#include <conio.h>
using namespace std;
int main(){
	char a,b,tem;
	while(1){
	cout<<"Player 1 please input your choice:";
	while(1){
	//using getch() to hide the information that player have input.
	tem=getch();
	if(tem==13)
		{cout<<endl;break;}
	else
		{a=tem;cout<<"*";}
	}
	if(a=='s'||a=='p'||a=='r')
		//input valid
		break;
	else 
		//input invalid
		cout<<"Please input valid settings(s,r or p)."<<endl;
	}
	//the same way 
	while(1){
	cout<<"Player 2 please input your choice:";
	while(1){
	//using getch() to hide the information that player have input.
	tem=getch();
	if(tem==13)
		{cout<<endl;break;}
	else
		{b=tem;cout<<"*";}
	}
	if(b=='s'||b=='p'||b=='r')
		//input valid
		break;
	else 
		//input invalid
		cout<<"Please input valid settings(s,r or p)."<<endl;
	}
	
	//result anasysis
	switch(a){
	case 's': {
		switch (b)
		{
		case 's': cout<<"Player 1:Scissors, Player 2:Scissors, Result:Draw"<<endl;break;
		case 'r': cout<<"Player 1:Scissors, Player 2:Rock, Result:Player 2 wins"<<endl;break;
		case 'p': cout<<"Player 1:Scissors, Player 2:Cloth, Result:Player 1 wins"<<endl;break;
		}
		break;	  }
	case 'r': {
		switch (b)
		{
		case 's': cout<<"Player 1:Rock, Player 2:Scissors, Result:Player 1 wins"<<endl;break;
		case 'r': cout<<"Player 1:Rock, Player 2:Rock, Result:Draw"<<endl;break;
		case 'p': cout<<"Player 1:Rock, Player 2:Cloth, Result:Player 2 wins"<<endl;break;
		}
		break;	  }
	case 'p': {
		switch (b)
		{
		case 's': cout<<"Player 1:Cloth, Player 2:Scissors, Result:Player 2 wins"<<endl;break;
		case 'r': cout<<"Player 1:Cloth, Player 2:Rock, Result:Player 1 wins"<<endl;break;
		case 'p': cout<<"Player 1:Cloth, Player 2:Cloth, Result:Draw"<<endl;break;
		}
		break;	  }
	}
	system("pause");
}
