#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n,i,j,temp,sum=0,sum1,x;
	cin>>n;
	j=n;
	while(n!=0)
	{
		n= n/10;
		x=x+1;
	}
	
	for(i=j;i>0;i=i/10)
	{
		temp = i%10;
		sum1=1;
		for(int k=0;k<x;k++)
		{
			sum1 = sum1*temp;
	   }
	   sum = sum+sum1;
	}
	if(sum==j)
	cout<<"armstrong";
	else
	cout<<"not";
}
