#include <iostream>

using namespace std;
int main()

    {
   string username, password, address;
    cout << "Enter your Name: ";
    getline(cin,username);
    cout << "Password: ";
    getline(cin,password);
    cout << "Enter your Address: ";
    getline(cin,address);h
    
    cout << "Hi I am " << username <<", I live at " << address <<"\n";

    return 0;
    }
