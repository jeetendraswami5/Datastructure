#include<iostream>
#include<stdlib.h>
using namespace std;
struct Node
{
	int info;
	Node *next;
} *Start,*save,*newptr,*rear,*ptr;

Node* create_node(int n)          
{
	Node *ptr = new Node;
	ptr->info = n;
	ptr->next = NULL;
	return ptr;
}

void Insert_beg(Node *np)
{
	if(Start == NULL)
		Start = rear = np;
	else
	{
		save = Start;
		Start = np;
		np-> next = save;		
	}
}
void delNode()  //from beg
{
	if(Start == NULL)
	{
		cout<<"Underflow!!!";
	}
	else
	{
		ptr = Start;
		Start = Start -> next;
		delete ptr;
	}
}
void Insert_end(Node *np)
{
	if(Start == NULL)
		Start = rear = np;
	else
	{
	    rear->next = np;
		rear = np;		
	}
}
void Display(Node *np)
{
	while(np != NULL)
	{
		cout<<np->info<<" "<<"->";
		np = np->next;
	}
}


int main()
{
	Start = NULL ;
	int info;
	int ch = 1;
	int m=1;
	int n;
	int a;
	

	
	while(m == 1)
	{
		cout<<"\nEnter Info Part:";
			    cin>>info;
			    
		     	cout<<"\nCreating New Node......";
		   
		    
			
				newptr = create_node(info);
				if(newptr != NULL)
				{
					cout<<"\nNew Node Created.....";
				}
				else
				{
					cout<<"Can't create....";
				}
				
				cout<<"\n 1 for Inserting node at Beg.....2 For Inserting node at end:";
				cin>>ch;
				if(ch == 1)
				{
					cout<<"\nInserting new node...";
					Insert_beg(newptr);
					cout<<"\nNow List is:\n";
				     Display(newptr);
			    }
			    else
			    {
			    	Insert_end(newptr);
			    	cout<<"\nNow List is:\n";
			     	Display(Start);
				}
				cout<<"\nWant to contineu..(1/2):";
				cin>>m;
	}
		cout<<"Want to delete Node (1/2):";
				cin>>a;
				if(a == 1)
				{
					delNode();
					Display(Start);
				}
    
    
	return 0;
}
