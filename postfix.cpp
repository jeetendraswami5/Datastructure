#include<iostream>
#include<stack>
using namespace std;

int calc(char *ch)
{
	char temp;
	
	stack<char>s;
	for(int i = 0 ; ch[i] ; i++)
	{
		if(isdigit(ch[i]))
		{
			temp = ch [i];
			s.push(temp - '0');
		}
		else
		{
			int val1 = s.top();
			s.pop();
			int val2 = s.top();
			s.pop();
			int x=0;
			switch(ch[i])
			{
				case '+': x = val2 + val1;
						  s.push(x);break;
				
				case '-': x = val2 - val1;
						  s.push(x);break;
				
				case '*': x = val2 * val1;
						  s.push(x);break;
				
				case '/': x	= val2/val1;
						  s.push(x);break;	  
			}
		}
	}
	return s.top();
}
int main()
{
	char ch[] = "546*+9-";
	cout<<"\nPostfix value of: "<<ch<<" is: "<<calc(ch);
	return 0;
}
