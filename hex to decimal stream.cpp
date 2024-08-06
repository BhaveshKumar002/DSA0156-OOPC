#include <iostream>
#include <sstream>
#include <string>
using namespace std;
int main() 
{
	stringstream ss;
    string h;
    int decimalValue;
    cout<<"Enter string"<<endl;
    cin>>h;
    ss << hex << h; 
    ss >> decimalValue;
    cout << "Decimal representation: " << decimalValue << endl;
}

