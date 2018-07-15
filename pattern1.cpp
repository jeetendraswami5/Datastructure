#include <iostream>
using namespace std ;
int main()
{
	int i=1 ,j=1,k=4, c=1;
	for(i=0;i<5;i++)
	{
		
	   for(k=5;k>i;k--)
		{
			cout<<" ";
		}
	    for(j=0;j<i;j++)
		{
			cout<<j<<" ";
			
		}
		cout<<"\n";
	}
	
	
}
