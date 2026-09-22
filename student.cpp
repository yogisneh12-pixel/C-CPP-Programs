#include<iostream>
using namespace std;
class School
 {
  private: 
  string name;
  int roll_number;
  float marks1,marks2,marks3,percentage;
  
  public : 
  void intput()
  {
    cout<<" enter name"<<endl;
    cin >> name ; 
    
  	cout<<"roll number"<<endl;
  	cin>>roll_number;
  	
  	cout<<"marks"<<endl;
  	cin>> marks1 >> marks2 >> marks3;	
  	
  } 
    	  void calulaterpercentage() 

  {
    percentage=(marks1+marks2+marks3)/3;
    
  }
  void display()
  {
    cout<<"        STUDENT DETAILS          "<<endl;
    cout<<" name "<< name << endl;
    cout<<" roll number "<< roll_number <<endl;
    cout<<" marks "<< marks1 << marks2 << marks3 <<endl;
    cout<<"percentage"<< "%" << endl;
  } 
};
 int main()
 {
 	School s;
 	 s.intput();
 	 s.calulaterpercentage();
 	 s.display();
 	 
 	 return 0;
}
  
