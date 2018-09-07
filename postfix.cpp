#include<iostream>
#include<stack>
using namespace std;

int calc(char *ch)
{
	char temp;
	
	stack<char>s;
	for(int i = 0 ; ch[i] ; i++)
	{
		if(ch[i] == ' ')
		{
			continue;
		}
		else
		if(isdigit(ch[i]))
		{
			int num =0;
			while(isdigit(ch[i]))
			{
				num = num*10 + (int)(ch[i] - '0');
				i++;
			}
			
			s.push(num);
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
	char ch[] = "51 6 * 63 + 9 - ";
	cout<<"\nPostfix value of: "<<ch<<" is: "<<calc(ch);
	return 0;
}
