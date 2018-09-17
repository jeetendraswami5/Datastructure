#include<iostream>
using namespace std;
struct node{
	int data;
	node *next;
}*start = NULL;

node *create(int n)
{
	node *ptr = new node;
	ptr->data = n;
	ptr->next = NULL;
	return ptr;
}

void insert_node(node *np )
{
	node *temp = start;
	np->next = start;
	
	if(start != NULL)
	{
		while(temp->next != start)
		{
			temp=temp->next;
		}
		temp->next = np;
		start = np;
	}
	else
	np->next = np;
	start = np;
}

void insert_end(node *np )
{
	node *temp = start;
	np->next = start;
	
	if(start != NULL)
	{
		while(temp->next != start)
		{
			temp=temp->next;
		}
		temp->next = np;
		np->next = start;
	}
	
}

void insert_bet(node *np,int n )
{
	node *temp = start;
	
	
	if(start != NULL)
	{
		while(temp->next != start)
		{
			if(temp->data == n)
			{
				np->next = temp->next;
				temp->next = np;
				break;
			}
			temp=temp->next;
		}
	}
	
}

void del_node(int n )
{
	node *temp = start;
	node *ptr;
	
	if(start->data == n)
	{
		while(temp->next != start)
		{
			temp=temp->next;
		}
		temp->next = start->next;
		start = start->next;
	}
	else
	if(start != NULL)
	{
		while(temp->next != start)
		{
			if(temp->data == n)
			{
				
				ptr->next = temp->next;
				delete(temp);
				return;
			}
			ptr = temp;
			temp=temp->next;
		}
		if(temp->next == start)
		{
			ptr->next = start;
			delete(temp);	
		}
		
	}
	
}


void display(node *np)
{
	
	node *temp = np->next;
	cout<<np->data<<" ";

		while(temp != np)
		{ 
			cout<<temp->data<<" ";
			temp = temp->next;
		}
	
}


int main()
{
	int n,m,x,a;
	char ch  = 'y';
	char y = 'y';
	
	while(ch == 'y')
	{
		cout<<"\nEnter data:";
		cin>>n;
		
		cout<<"1..for beg...2 for end:";
		cin>>m;
		switch(m)
		{
			case 1: insert_node(create(n));
					break;
			case 2:insert_end(create(n));
					break;
			case 3:cout<<"\nElement after which needs to insert:";
					cin>>x;
					insert_bet(create(n),x);
					break;
		}
		
		
		cout<<"\nmore:";
		cin>>ch;
	}
	cout<<"\nwant to delete:";
	cin>>y;

	while(y == 'y')
	{
		cout<<"\nElement want to delete:";
		cin>>a;
		del_node(a);
		cout<<"more:";
		cin>>y;
	}
	display(start);
	return 0;
}
