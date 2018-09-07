#include<iostream>
#include<stack>
using namespace std;
int main()
{
	char str;
	char ch;
	stack<char> s;
	for(int i=0;i<6;i++)
	{
		cout<<"\nInsert string:";
		cin>>str;
		s.push(str);
	}
	
	for(int i=0;i<6;i++)
	{
		ch = s.top();
		s.pop();
		cout<<ch;
	}
	
	return 0;
}
