#include <iostream>
#include <string>
using namespace std;
int main() 
{
    string hexString = "FF";
    int d = stoi(hexString,nullptr,16);
    cout << "Decimal representation: " <<d<<endl;
}

