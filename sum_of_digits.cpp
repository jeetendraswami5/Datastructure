#include<iostream>
using namespace std;
int main()
{
	int i ,sum = 0;
	cin>>i;
	int temp = i;
	for(int q = 0; temp!=0 ; q++  )
	{
		i=temp%10;
		sum +=i;
		temp = temp/10;
	}
	cout<<sum;
}
