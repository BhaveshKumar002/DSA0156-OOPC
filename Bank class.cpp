#include <iostream>
using namespace std;
class Bank 
{
public:
    virtual int getBalance() const 
	{
        return 0;
    }
};
class BankA : public Bank 
{
public:
    int getBalance() const override 
	{
        return 1000;
    }
};
class BankB : public Bank 
{
public:
    int getBalance() const override 
	{
        return 1500;
    }
};
class BankC : public Bank 
{
public:
    int getBalance() const override 
	{
        return 2000;
    }
};
int main() 
{
    BankA bankA;
    BankB bankB;
    BankC bankC;
    cout << "Money deposited in Bank A $" << bankA.getBalance() << endl;
    cout << "Money deposited in Bank B $" << bankB.getBalance() << endl;
    cout << "Money deposited in Bank C $" << bankC.getBalance() << endl;
}

