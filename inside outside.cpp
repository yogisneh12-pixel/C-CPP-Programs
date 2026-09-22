#include<iostream>
using namespace std;
class hello
{
	private:
		string inside;
		int output;
		public:
			void hi(string a,int b);
			
};
void hello::hi(string a,int b)
{
	inside=a;
	output=b;
	cout<<inside<<endl;
	cin>>b;
}
int main()
{
	hello s1;
	void hi(string a,int b);
}



//programmm to understand the concept of scope resolution operator.

#include<iostream>
using namespace std;

int main()
{
	int x=10;
	cout<<x<<endl;
}

