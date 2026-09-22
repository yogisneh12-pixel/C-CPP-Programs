#include<iostream>
using namespace std;
class hello
{
	public:
		
	int a,b,i,j;
	void hi()
	{
		cout<<"enter your first number"<<endl;
		cin>>a;
		
		cout<<"enter your last number"<<endl;
		cin>>b;
		
		
		for(i=a;i<=b;i++)
		
	    {
	    	cout<<endl;
		for(j=1;j<=10;j++)
		
		cout<<i<<"*"<<i<<"="<<i*j<<endl;

		}
	
	}
	
};
int main()
{
	hello s1;
	s1.hi();
}


