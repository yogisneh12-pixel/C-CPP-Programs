#include<iostream>
using namespace std;
class hello
{
	private:
		
		string username;
		string password;
		public:
			void hi(string a,string b);//define member function outside the class 
		
};
void hello::hi(string a,string b)
{
	username=a;
	password=b;
	cout<<username<<endl;
	cout<<password<<endl;
}
int main()
{
	hello s1;
	s1.hi("hello","world");
}
