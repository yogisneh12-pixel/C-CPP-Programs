//programmm to understand the concept of scope resolution operator.

#include<iostream>
using namespace std;
int x=20;//global scope

int main()
{
	int x=10;//local scope
	cout<<x<<endl;
		cout<<::x<<endl;

	
} 
