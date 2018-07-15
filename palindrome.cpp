#include<iostream>
using namespace std;
int main()
{
	int i,temp =0,sum=0;
	cin>>i;
	int n=i;
	for(int q=i;q>0;q/=10)
	{
		temp=q%10;
		sum = (sum*10) + temp;
	}
	if(sum == n)
	cout<<"Palindrome";
	else
	cout<<"Not Palindrome";
}
