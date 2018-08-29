#include<iostream>
#include<stdlib.h>
using namespace std;
const int size = 50;
int Q[size];
int front = -1 , rear = -1,item;


void insert_queue(int Q[] , int item)
{
	if(rear == size -1)
	{
		cout<<"\n Queue overflow!!!!!";
	}
	else
	if(rear == -1)
	{
		front = rear = 0;
		Q[rear] = item;
	}
	else
	{
		rear++;
		Q[rear] = item;
	}
}
void display(int Q[],int f,int r)
{
	if(front == -1)
	cout<<"\nNothing in queue";
	else
	{
		for(int i = front;i<=rear;i++)
		{
			cout<<Q[i]<<"<-\t";
		}
	}
	
}
void delete_queue(int q[])
{
	int m;
	if(Q[front] == -1)
	{
		cout<<"Queue undeflow!!!!!";
	}
	else
	{
		m = q[front];
		if(front == rear)
			front = rear = -1;
		else
		front++;	
		
	}
}

int main()
{
	char ch = 'y';
	char ch1 = 'y';	
	while(ch == 'Y'||ch == 'y')
	{
		cout<<"\nEnter the element want to insert in queue:";
		cin>>item;
		insert_queue(Q,item);
		display(Q,front,rear);
		 cout<<"\nWant to insert more(y/n):";
		 cin>>ch;
	}
	
	while(ch1 == 'Y'||ch1 == 'y')
	{
		delete_queue(Q);
		display(Q,front,rear);
		 cout<<"\nWant to delete more(y/n):";
		 cin>>ch1;
	}
	
	return 0;
}
