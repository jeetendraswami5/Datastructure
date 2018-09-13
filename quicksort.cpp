#include<iostream>
using namespace std;

void swap(int *a , int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int partition(int *a, int l, int h)
{
	int n = a[h];
	int i = (l-1);
	for(int j=l;j<=h-1;j++)
	{
		if(a[j] <= n)
		{
			i++;
			swap(&a[i] , &a[j]);
		}
	}
	swap(&a[i+1] , &a[h]);
	return i+1;
}

void quicksort(int *a , int l, int h)
{
	int stack[h+l-1];
	int top =-1;
	
	stack[++top] = l;
	stack[++top] = h;
	
	while(top>=0)
	{
		h = stack[top--];
		l = stack[top--];
		
		int p = partition(a,l,h);
		
		if(p-1>l)
		{
			stack[++top] = l;
			stack[++top] = p-1;
		}
		
		if(p+1<h)
		{
			stack[++top] = p+1;
			stack[++top] = h;
		}
	}
}

int main()
{
	int n;
	cin>>n;
	int a[n];
	
	for(int i=0;i<n;i++)
	cin>>a[i];
	
	quicksort(a,0,n-1);
	
	for(int i=0;i<n;i++)
	cout<<a[i]<<" ";
	return 0;
}
