#include<iostream>
using namespace std;

struct node{
	int data;
	node *next;
}*start,*rear;

node *create(int data)
{
	node *ptr = new node;
	
	ptr->data = data;
	ptr->next = NULL;
	return ptr;
}

void insertbeg(node *ptr)
{
		if(start == NULL)
		start = ptr;
		else
		{
			node*np = start;
			start = ptr;
			ptr->next= np;
		}
}

void insertend(node*ptr)
{
	if(start == NULL)
	start = rear = ptr;
	else
	{
		rear->next = ptr;
		rear = ptr;
	}
}

void insertbet(node*ptr,int n)
{
	while(ptr != NULL)
	{
		if(ptr->data == n)
		{
			node *temp = ptr->next;
			ptr->next = ptr;
			ptr->next = temp;
		}
	}
}

void display(node*np)
{
	while(np != NULL)
	{
		cout<<np->data<<" ";
		np = np->next;
	}
}

int main()
{
	char ch = 'y';int mh,n,x;
	while(ch == 'y')
	{
	    cout<<"\nEnter data of node:";
	    cin>>n;
		node*newptr = create(n);
	
		cout<<"\n1 for beg , 2 for end , 3 for between:";
		cin>>mh;
		
		switch(mh)
		{
			case 1: insertbeg(newptr);
					break;
			
			case 2: insertend(newptr);
					break;
			
			case 3: cout<<"\nplace at which node insert:";
					cin>>x;
					insertbet(newptr,x);
					break;
		}
		
		cout<<"\nMORE:";
		cin>>ch;
	}
	
	display(start);
	
	return 0;
}
