#include<iostream>
using namespace std;

void arrange(int *a ,int n)
{
	int count = 0;
	for(int i=0;i<n;i++)
	{
		if(a[i] != 0)
		swap(a[count++] , a[i]);
	}
	

	
	for(int j=0;j<n;j++)
	cout<<a[j];
}

int main()
{
	int n;
	cin>>n;
	int *a = new int[n];
	
	for(int i=0;i<n;i++)
	cin>>a[i];
	
	arrange(a,n);
	delete []a;
}
