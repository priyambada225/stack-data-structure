#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;
int stack[10];
int n;
int top=-1;
void push(int n)
{
	top=top+1;
	stack[top]=n;
}
void pop()
{
	top=top-1;
	cout<<"deleted item : "<<stack[top+1]<<endl;
	
}
void display()
{    cout<<"stack is : "<<endl;
	for(int i=top;i>=0;i--)
	{
		cout<<stack[i]<<endl;
	}
}
int main()
{
	push(1);
	push(2);
	push(4);
	display();
	pop();
	display();
	//return 0;
}
