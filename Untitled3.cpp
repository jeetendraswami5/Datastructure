#include<iostream>
using namespace std;
int main()
{
	int a,i,fact=1;
	cout<<"enter the no. :\n";
	cin>>a;
	i=a;
	
	while(a)
	{
		fact=fact*a;
		--a;
	}
	cout<<"\nfactorial of "<<i<<"is:"<<fact;
	return 0;
}
