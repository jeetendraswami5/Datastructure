#include<iostream>
using namespace std;

void swap(int *a , int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void bubble_sort(int *a , int n )
{
	int i,j,min,count = 0;
	for(i=0;i<n-1;i++)
	{
		int flag=0;
		for(j=0 ; j<n-i-1 ; j++)
		{
			if(a[j]>a[j+1])
			{
				
				swap(&a[j] , &a[j+1]);
				flag = 1;
			}
		
		}
		
		if(flag == 0)
		break;
	}
	cout<<count<<endl;
}

int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	
	bubble_sort(a,n);
	for(int i = 0; i<n ; i++)
	cout<<a[i]<<" ";
	return 0;
}
