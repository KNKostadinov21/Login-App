#include <iostream>
#include <string>
#include <DataLayer.h>
using namespace std;

bool containsDigit(string str)
{
    for (char c : str)
    {
        if (isdigit(c))
        {
            return true;
        }
    }
    return false;
}

Data registerData;
void registering()
{
    cout << "Register yourself." << endl;
    cout << endl;
  
    cout << "Your username must contain \"codingburgas.bg\".Enter your username : ";
    getline(cin, registerData.username);
    cout << endl;

    cout << "Your password must contain a number. Enter your password: ";
    getline(cin, registerData.password);
    cout << endl;
}

void checkRequires()
{
    while (true)
    {
        if (registerData.username.find("@codingburgas.bg") != string::npos && containsDigit(registerData.password))
        {
            cout << "Registered successful";
            cout << "Now, log in.";
            cout << endl;
            break;
        }

        else
        {
            cout << "Your data doesn't match our requires. Try again registering." << endl;
            cout << endl;
            cout << "Your username must contain \"codingburgas.bg\".Enter your username : ";
            getline(cin, registerData.username);
            cout << endl;
            cout << "Your password must contain a number. Enter your password: ";
            getline(cin, registerData.password);
        }
    }
}


Data loginData;
void login()
{
    while (true)
    {
        cout << "Enter your username: ";
        getline(cin, loginData.username);
        cout << endl;
        cout << "Enter your password: ";
        getline(cin, loginData.password);

        cout << "Checking if there is an email like this..." << endl;
        cout << endl;

        if (loginData.username == registerData.username)
        {
            if (loginData.password == registerData.password)
            {
                cout << "Welcome " << loginData.username << "! You can continue working." << endl;
                break;
            }
        }
        else
        {
            cout << "There is no username like this! Try again." << endl;
        }
    }
}