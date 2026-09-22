#include<iostream>
using namespace std;
class hello{
	string name;
	string city;
	string mobile;
	int per=0;
	int age=0;
	public:
			void hell()
			{
		    cout<<"Enter student's Name          "<<name<<endl;
			cout<<"Enter Student city            "<<city<<endl;
			cout<<"Enter student mobile number   "<<mobile<<endl;
			cout<<"Enter student percentage      "<<per<<endl;
			cout<<"Enter student age             "<<age<<endl;
		}
		void ADMIN()
		{
			cout<<"Admin block             "<<endl;
		    cout<<"student's Name          "<<name<<endl;
			cout<<"Student city            "<<city<<endl;
			cout<<"student mobile number   "<<mobile<<endl;
			cout<<"student percentage      "<<per<<endl;
			cout<<"student age             "<<age<<endl;
		}
		void principal()
		{
		cout<<"Principal block             "<<endl;
		cout<<"student name                "<<name<<endl;
		cout<<"student mobile number       "<<mobile<<endl;
		cout<<"student percentage          "<<per<<endl;
		cout<<"student age                 "<<age<<endl;	
		}
		void HOD()
		{
			cout<<"HOD block               "<<endl;
		cout<<"student name                "<<name<<endl;
		cout<<"student mobile number       "<<mobile<<endl;
		cout<<"Student city                "<<city<<endl;
		}
		
};
int main()
{
	hello s1;
	cout<<"WELCOME TO ARYA COLLEGE OF ENGINEERING"<<endl;
	string clg;
	cout<<"Press 1 for student information"<<endl;
	cin>>clg;
	if (clg=="1")
	{
		cin>>name;
		cin>>city;
		cin>>mobile;
		cin>>per;
		cin>>age;
		
	s1.hell();
}
	else if(clg=="admin")
	{
		s1.ADMIN();
		
	}
		else if(clg=="hod")
	{ 
		s1.HOD();
	}
	else if(clg=="principal")
	{
		s1.principal();
	}
}
