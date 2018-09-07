#include<iostream>
using namespace std;

void reverse(int *a , int n)
{
	int temp;
	for(int i=0;i<n/2;i++)
	{
		temp = a[i];
		a[i] = a[n-i-1];
		a[n-i-1] = temp;
	}
	for(int i=0;i<n;i++)
	{
		cout<<a[i];
	}
}

int main()
{
	int n;
	cin>>n;
	int *a = new int[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	
	reverse(a,n);
	delete []a;
	return 0;
}
