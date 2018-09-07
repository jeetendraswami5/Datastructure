#include<iostream>
using namespace std;

void rotate(int a[] , int n)
{
	int temp = a[n-1];
	int i;
	for( i=n-1;i>=0;i--)
	{
		a[i] = a[i-1];
	}
	 a[0] = temp;
}

int main()
{
	int n,d;
	cin>>n;
	int *a = new int[n];
	cout<<"\nno. of places to rotate:";
	cin>>d;
	cout<<"\nEnter array:";
	
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	for(int i=0;i<d;i++)
	{
		rotate(a,n);
	}
	
	cout<<"\nafter rotation:";
		for(int i=0;i<n;i++)
	{
		cout<<a[i];
	}
	
	return 0;
}
