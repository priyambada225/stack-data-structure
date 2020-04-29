#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;
struct node
{
	int data;
	struct node *next;
};
struct node *top=NULL;

void push(int val)
{
struct node *newnode=new node();
newnode->data=val;
newnode->next=top;
top=newnode;	
}
void pop()
{
	if(top==NULL)
	{
		cout<<"stack underflow"<<endl;
	}
	else
	{
	cout<<"popped element : "<<top->data<<endl;
	top=top->next;
    }
}
void display()
{
	struct node *ptr;
	if(top==NULL)
	{
		cout<<"stack underflow"<<endl;
	}
	else
	{
		ptr=top;
		cout<<"stack elements are :"<<endl;
		while(ptr!=NULL)
		{
	    cout<<ptr->data<<" "<<endl;
		ptr=ptr->next;
	    }
			
	}
	}
	//cout<<endl;
	
int main()
{
	push(4);
	push(5);
	display();
	pop();
	display();
	push(6);
	push(7);
	push(8);
	display();
	pop();
	display();
	return 0;
	
}


