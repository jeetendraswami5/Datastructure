//Stack from Linked list.....pushing and poping....
#include<iostream>
using namespace std;
struct Node
{
	int info;
	Node *next;
}*top,*newptr,*save,*ptr;

Node*create_node(int i)
{
	ptr = new Node;
	ptr->info = i;
	ptr->next = NULL;
}

void push(Node*np)
{
	if(top == NULL)
	{
		top = np;
	}
	else
	{
		save = top;
		top = np;
		np-> next = save;
    }
	
}
void pop()
{
	if(top == NULL)
	{
		cout<<"\nNothing in stack!!!";
	}
	else
	{
		ptr=top;
		top=top->next;
		delete ptr;
	}
}
void display(Node*np)
{
	while(np != NULL)
	{
		cout<<np->info<<" ";
		np=np->next;
	}	
}

int main()
{
	top = NULL;
	int a,m=1;
	int ch = 1;
	
	
	
	while(m == 1)
	{
		cout<<"\nelement to be inserted:";
		cin>>a;
		newptr = create_node(a);
		
		cout<<"\nPushing.....";
		push(newptr);
		
		cout<<"\nWant to contineu:(1/2)";
		cin>>m;
    }
    
    cout<<"\nIf you want to delete(1/2)";
    cin>>ch;
    
    if(ch == 1)
    {
    	pop();
	}
	
	cout<<"\n Now the stack is:\n";
	display(top);
	return 0;
}
