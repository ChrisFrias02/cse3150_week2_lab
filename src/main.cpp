#include <iostream>
#include <string>
#include "parser.h"

int main(){
    using namespace std;

    cout <<"Enter your Full Name: ";
    string fullName;
    getline(cin,fullName);

    cout <<"Enter your email adress: ";
    string email;
    getline(cin,email);

    string* firstName = new string;
    string* lastName = new string;

    StringUtils::parseName(fullName,firstName,lastName);

    string username = StringUtils::getUsername(email);

    //print results
    cout << "First Name: " << *firstName << endl;
    cout << "Last Name: "  << *lastName  << endl;
    cout << "Username: "   << username   << endl;

    //free the memory
    delete firstName;
    delete lastName;

    return 0;
}