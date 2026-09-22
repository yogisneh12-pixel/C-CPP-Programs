#include <iostream>
using namespace std;

int main() {
    string username, password;

    string correctUsername = "admin";
    string correctPassword = "1234";

    cout << "Enter Username: ";
    cin >> username;

    cout << "Enter Password: ";
    cin >> password;

    if (username == correctUsername && password == correctPassword) {
        cout << "\nLogin Successful!" << endl;
    } else {
        cout << "\nInvalid Username or Password!" << endl;
    }

    return 0;
}
