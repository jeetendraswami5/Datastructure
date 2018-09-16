#include<iostream>
using namespace std;
struct node{
	int data ;
	node *next;
}*start=NULL,*temp,*newptr;

node *create(int data)
{
	node *np = new node;
	np->data = data;
	np->next = NULL;
	return np;
}

void insertnode(node *ptr)
{
	if(start == NULL)
	start = ptr;
	else
	{
		temp = start;
		start = ptr;
		ptr->next = temp;
	}
}

void reverse()
{
	node *prev , *next,*curr;
	prev = next = NULL;
	curr = start;
	while(curr != NULL)
	{
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}
	start = prev;
}

void display(node *np)
{
	while(np != NULL)
	{
		cout<<np->data<<" -> ";
		np = np->next;
	}
}

int main()
{
	char ch = 'y';
	int n;
	while(ch == 'y')
	{
		cout<<"\n data for node:";
		cin>>n;
		
		insertnode(create(n));
		
		cout<<"\nMORE:";
		cin>>ch;
		
	}
	
	cout<<"\nbefore reversing:";
	display(start);
	
	cout<<"\nAfter reverse:";
	reverse();
	display(start);
	
	return 0;
}

