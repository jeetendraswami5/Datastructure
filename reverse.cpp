#include<iostream>
using namespace std;
int main()
{
	int n,temp = 0,sum=0;
	cin>>n;
	for(int q =n; q>0;q/=10)
	{
		temp = q%10;
		sum = (10*sum)+temp;
	}
	cout<<sum;
}
