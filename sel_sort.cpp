#include<iostream>
using namespace std;

void swap(int *a , int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void sel_sort(int *a , int n )
{
	int i,j,temp,min,k;
	for(i=0;i<n-1;i++)
	{
		min = i;
		for(j=i+1 ; j<n ; j++)
		{
			if(a[j]<a[min])
			{
				
				min = j;
			}
		}
		swap(&a[min] , &a[i]);
	}
}

int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	
	sel_sort(a,n);
	for(int i = 0; i<n ; i++)
	cout<<a[i];
	return 0;
}
