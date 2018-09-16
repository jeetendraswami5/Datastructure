#include<iostream>
using namespace std;
struct node{
	int data;
	node *prev;
	node *next;
}*start = NULL,*temp,*last;

node *create(int data)
{
	node *np = new node;
	np->data = data;
	np->next = NULL;
	np->prev = NULL;
	return np;
}

void insert_beg(node *ptr)
{
	ptr->next = start;
	ptr->prev =NULL;
	if(start != NULL)
	start->prev = ptr;
		
	start = ptr;
}

void insert_end(node *beg,node *ptr)
{
	node *rear = beg;
	if(start == NULL)
	{
		ptr->prev = NULL;
		start = ptr;
	
	}
	else{
	
		while(rear != NULL)
		{
			if(rear->next == NULL){
				rear->next = ptr;
				ptr->prev = rear;
				return ;
			}	
			rear=rear->next;	
		}
	}
	
}

void insert_after(node *ptr ,int n)
{
	node *np = start;
		while(np != NULL)
		{
			if(np->data == n)
			{
				ptr->next = np->next;
				np->next = ptr;
				ptr->prev = np;
				
				if(ptr->next != NULL)
				{ 	
					ptr->next->prev = ptr;
				}
				break;
			}	
			np=np->next;	
		}
}

void delnode(int n)
{
	node *np = start;
		while(np != NULL)
		{
			if(np->data == n)
			{
				np->prev->next = np->next;
				np->next->prev = np->prev;
				delete(np);
				break;
			}	
			np=np->next;	
		}
}

void display1(node *np)
{
	
	while(np != NULL)
	{
		cout<<np->data<<" -> ";
		last = np;
		np = np->next;
	}
	
	cout<<"\n";
	while(last != NULL)
	{
		cout<<last->data<<" -> ";
		last = last->prev;
	}
}


int main()
{
	char ch = 'y';
	int n,m,x;
	while(ch == 'y')
	{
		cout<<"\n data for node:";
		cin>>n;
		cout<<"\n1 for beg....2 for last...3 for between:";
		cin>>m;
		
		if(m == 1)
		insert_beg(create(n));
		else
		if(m == 2)
		insert_end(start,create(n));
		else
		if(m == 3)
		{
			cout<<"\nNode after which want to insert:";
			cin>>x;
			insert_after(create(n),x);
		}
		else
		if(m == 4)
		{
			int d;
			cout<<"\nbefore deletion:\n";
			display1(start);
			cout<<"\nAfter deletion enter data:\n";
			cin>>d;
			delnode(d);
			display1(start);
		}
		
		cout<<"\nMORE:\n";
		cin>>ch;
		
	}
	

	display1(start);
	
	
	
	
	return 0;
}
