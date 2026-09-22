//array of object

#include<iostream>
using namespace std;
class hello {
	private:
	    string name, surname;
	public:   
	    void hi();
	    void hi2();
};

void hello::hi()
{
	cout<<"Enter your name: "<<endl;
	cin>>name;
	cout<<"Enter your surname: "<<endl;
	cin>>surname;
}
void hello::hi2()
{
	cout<<"Student name: "<<name<<endl;
	cout<<"Student surname: "<<surname<<endl;
}
int main()
{
	hello s1[50];//array of object 
	int user,i;
	cout<<"Enter the no. of user: "<<endl;
	cin>>user;
	
	for(i = 1;i <= user; i++){
		s1[i].hi();
	}
	
	for(i = 1;i <= user; i++){
		s1[i].hi2();
	}
}
