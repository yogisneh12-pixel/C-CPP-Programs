#include<iostream>
using namespace std;
class hello
{
	private:
		
		string username;
		string password;
		public:
			void hi(string a,string b);//define member function outside the class 
		void hi2();
};
void hello::hi(string a,string b)//parameter
{
	cout<<"enter your username"<<endl;
	cin>>username;
	cout<<"enter the password"<<endl;
	cin>>password;
	
}
void hello::hi2()
{
	cout<<username<<endl;
}
int main()
{
	hello s1;
	s1.hi("hello","world");
}
