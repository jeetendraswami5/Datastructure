//Stack from array.....pushing and poping....
#include<iostream>
using namespace std;
const int size = 50;

void push(int stack[], int &top,int item)
{
		if(top == size-1)
		cout<<"\nStack Overflow";
		else
		{
			top++;
			stack[top] = item;
		}
} 
void pop(int stack[], int &top)
{
		if(top == size-1)
		cout<<"\nStack Underflow";
		else
		{
			
			cout<<stack[top];
			top = top -1;
		}
} 
void display(int stack[],int top)
{
	cout<<stack[top]<<"<--";
	for(int i = top-1;i>=0;i--)
	{
		cout<<stack[i]<<"\n";
	}
}

int main()
{
	int stack[size],top=-1,a;
	char ch = 'y';
		char mh = 'y';
		char n = 'y';
	cout<<"\n pushing the elements...";
	
	
	
	
		while(ch == 'Y' || ch == 'y')
		{
	        cout<<"\nEnter Element to be inserted:";
			cin>>a;
			
			push(stack,top,a);
			
			cout<<"\nwant to continue(y/n):";
			cin>>ch;
	    }
   
        cout<<"\nWant to delete elements:(y/n)";
        cin>>n;
        if(n == 'y'||n=='Y')
        {
        	cout<<"\nDeleting Elements....";
	       while(mh == 'y' || mh == 'Y')
	   	    {
	   			pop(stack,top);
	   			cout<<"\nWant to contineu(y/n):";
	   			cin>>mh;
	   	    }
   	    }
	cout<<"\nStack is:";
		display(stack,top); 
	return 0;
}
