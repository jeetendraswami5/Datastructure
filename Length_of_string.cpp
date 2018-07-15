#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
	char ch[30];
	int count=0;
	cout<<"\nEnter the string:\n";
	gets(ch);
	count=strlen(ch);
	cout<<"\n length of string:\t"<<count;
	return 0;
}
