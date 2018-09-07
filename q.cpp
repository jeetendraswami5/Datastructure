#include<iostream>
using namespace std;

int sum(int *a , int L ,int R)
{
	int temp = 0;
	for(int i =L;i<=R;i++)
	temp = temp+a[i];
	
	return temp;
}

int main()
{
	int n,L,R;
	cin>>n;
	int *a =new int[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	cout<<"\nQuery:";
	cin>>L>>R;
	cout<<sum(a,L,R);
	return 0;
}
