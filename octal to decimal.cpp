#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() 
{
    stringstream ss;
    string o,d;
    cout << "Enter octal string: " << endl;
    cin >> o;
    ss << oct << o; 
    ss >> d;
    cout << "Decimal representation: " << d<< endl;
}

