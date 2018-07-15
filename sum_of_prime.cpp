#include<iostream>
using namespace std;
int main()
{
	int i , j,flag=0,sum=0;
	for(i=1 ; i<100;i++)
	{
		for(j=2;j<i;j++)
		{
			if(i%j == 0)
			{
				flag = 1;
				break;
			}
			else
			flag = 0;
		}
		if(flag == 0)
		sum+=i;
	}
	cout<<sum;
}
