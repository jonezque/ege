// ConsoleApplication3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    char c;
    while ((c = getchar()) != '#') {
      str += c;
    }
    cout << str;

}