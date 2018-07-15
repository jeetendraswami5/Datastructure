#include<iostream>
using namespace std;
int main()
{
	int n,flag = 0;
	cin>>n;
	for(int i = 2;i<n;i++)
	{
		if(n%i == 0)
		{
			flag = 1;
			break;
		}
		else
		{
			flag = 0;
		}
	}
	if(flag == 0)
	cout<<"Prime";
	else
	cout<<"Not Prime";
}
