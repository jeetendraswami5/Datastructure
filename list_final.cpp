#include<iostream>
using namespace std;

struct node{
	int data;
	node *next;
}*start,*rear,*prev;


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
		start = rear =  ptr;
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

void insertbet(node*ptr,int p)
{
	node * n = start;
	while(n != NULL)
	{
		if(n->data == p)
		{
			node *temp = n->next;
			n->next = ptr;
			ptr->next = temp;
			break;
		}
		n = n->next;
	}
}

void delnode(int p)
{
	node * x = start;
	while(x != NULL)
	{
		if(x->data == p)
		{
			prev->next = x->next;
			delete(x); 
			break;
		}
		prev =x;
		x = x->next;
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
	start = NULL;
	char ch = 'y';int mh,n,x;
	while(ch == 'y')
	{
	    cout<<"\nEnter data of node:";
	    cin>>n;
		node*newptr = create(n);
	
		cout<<"\n1 for beg , 2 for end , 3 for between, 4 for delete node:";
		cin>>mh;
		if(mh == 1)
		insertbeg(newptr);
		
		else
		if(mh == 2)
		insertend(newptr);
		
		else
		if(mh == 3)
	    {
	    	cout<<"\nplace at which you want to insert:";
	    	cin>>x;
	    	insertbet(newptr,x);
	    	
		}
		else
		if(mh == 4)
		{
			cout<<"\nnode to delete:";
			cin>>x;
			delnode(x);
		}
		
		
		
		cout<<"\nMORE:";
		cin>>ch;
	}
	
	display(start);
	
	return 0;
}
