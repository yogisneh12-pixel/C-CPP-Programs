#include<iostream>
using namespace std;
class hello{
	string name= rahul;
	string city=jpr;
	string mobile=12345;
	int per=1;
	int age=1;
	public:
		
		void ADMIN()
		{
			cout<<"Admin block             "<<endl;
		    cout<<"student's Name          "<<name="rahul"<<endl;
			cout<<"Student city            "<<city="jpr"<<endl;
			cout<<"student mobile number   "<<mobile="12345"<<endl;
			cout<<"student percentage      "<<per="1"<<endl;
			cout<<"student age             "<<age="1"<<endl;
		}
		void principal()
		{
		cout<<"Principal block             "<<endl;
		cout<<"student name                "<<name="rahul"<<endl;
		cout<<"student mobile number       "<<mobile="12345"<<endl;
		cout<<"student percentage          "<<per="1"<<endl;
		cout<<"student age                 "<<age="1"<<endl;	
		}
		void HOD()
		{
			cout<<"HOD block               "<<endl;
		cout<<"student name                "<<name="rahul"<<endl;
		cout<<"student mobile number       "<<mobile="12345"<<endl;
		cout<<"Student city                "<<city="jpr"<<endl;
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
