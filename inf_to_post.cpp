#include<iostream>
#include<stack>
#include<string.h>
using namespace std;

int prec(char c)
{
	if(c == '^')
	return 3;
	else if(c == '*' || c == '/')
	return 2;
	else if(c == '+' || c == '-')
	return 1;
	else
	return -1;
}

string infix_to_post(string str)
{
	stack<char>s;
	s.push('N');
	string ns;
	int l = str.length();
	for(int i = 0;i<l;i++)
	{
		if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') )
		ns+=str[i];
		
		else if(str[i] == '(')
		
		s.push('(');
		
		else if(str[i] == ')')
		{
			while(s.top() != 'N' && s.top() != '(')
			{
				char c = s.top();
				s.pop();
				ns+=c;
			}
			if(s.top() == '(')
			{
				char c = s.top();
				s.pop();
			}
		}
		else
		{
			while(s.top() != 'N' && prec(str[i]) <= prec(s.top()))
			{
				char c = s.top();
				s.pop();
				ns+=c;
			}
			s.push(str[i]);
		}
	}
while(s.top() != 'N')
	{
		char c = s.top();
		s.pop();
		ns+=c;
	}
	
	
return ns;
}

int main()
{
	string str = "a+b*(c^d-e)^(f+g*h)-i";
    cout<<infix_to_post(str);
	return 0;
}
