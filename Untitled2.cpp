#include <iostream>
#include <string>
using namespace std;

class hello {
public:
    string username = "admin";
    string password = "12345";
};

   int main() 
   {
    hello s1;
    string a, b;

    cout << "enter name" << endl;
    cin >> a;

    cout << "enter password" << endl;
    cin >> b;

    if (s1.username == a && s1.password == b) {
        cout << "welcome" << endl;
    }
    else {
        cout << "invalid username or password" << endl;
    }

    return 0;
  
