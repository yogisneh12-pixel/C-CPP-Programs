#include<iostream>
using namespace std;
 class bankaccount
 {
 	public:
 	
	string Account_Number;
	string Account_Holder_Name;
	int Total_Balance;
	int balance;
	int Mini_Balance;
	int Low_Amount;
  void input()
{
  	cout<<"Account Number"<<endl;
  	cin>> Account_Number;
  	
  	cout<<" Account Holder Name";
  	cin>>Account_Holder_Name; 
  	
  	cout<<"Balance";
  	cin>>Total_Balance;
	cout<<"Mini_Balance"<<endl;
	
}
	{
	
  	if (Mini_Balance<=1000; Mini_Balance++;);	
  	 cout<<"Low_Amount"<<endl; 
};

  
  void display()
  {
  	cout<<"          ACCOUNT DETAILS           "<<endl;
  	cout<<"Account Number                      "<<Account_Number<<endl;
  	cout<<"Account Holder Name                 "<<Account_Holder_Name<<endl;
  	cout<<"Total Balance                       "<<Total_Balance<<endl;
    cout<<"Low_Amount                         "<<Low_Amount<<endl; 

//  	cout<<"Withdraw                            "<<Withdraw<<endl;
  	
 }
  };
  
 int main()
 {
 	bankaccount s1;
	 s1.input();
	 s1.display();
 }
 
 
 
