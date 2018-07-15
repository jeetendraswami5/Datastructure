#include<iostream>
#include<stdio.h>
using namespace std;
class student
{
	int roll[5],id[5];
	char name[5],dept[5];
	float marks[5];
	
public:

	void getdata();
	void fetchdata(int m);
};

void student::getdata()
{
		for(int i=0;i<5;i++)
		{
			cout<<"\nget the info of student:\n";
			cout<<"\nenter name:\n";
			cin>>name[i];
			cout<<"\nenter id:\n";
			cin>>id[i];
			cout<<"\n enter dept:\n";
			cin>>dept[i];
			cout<<"\nmarks:\n";
			cin>>marks[i];
		}
}

void student::fetchdata(int m)
{
	for(int j=0;j<5;j++)
	{
		if(id[j]==m)
		{
			cout<<"student details:\n";
			cout<<"\nID:\t"<<id[j];
			cout<<"\nname:\t"<<name[j];
			cout<<"\nDept:\t"<<dept[j];
			cout<<"\nMarks:\t"<<marks[j];
		}
	}
}

int main()
{
	student s1;
	student s2;
	s1.getdata();
	s2.fetchdata(3);
	return 0;
}
