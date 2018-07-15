#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	char ch;
	do
	{
	
	cout<<"/n Enter character:";
	ch=getchar();
	if(ch=='\n')
	ch=getchar();
	if(ch>=65&&ch<=90)
	ch=ch+32;
	else
	if(ch>=97&&ch<=122)
	ch=ch-32;
	  putchar(ch);
	  cout<<"\n";            
    }while(ch!='0');
    return 0;
}
