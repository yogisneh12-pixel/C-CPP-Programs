#include<iostream>
using namespace std;
class A{
	public:
	int a=10;
};
class B{
	public:
	int b=20;
};
class C:public A{
	public:
	int c=30;
};
class D:public A,public B{
	public:
	int d=40;
};
int main()
{
	D s1;
	cout<<s1.a<<endl;
}
