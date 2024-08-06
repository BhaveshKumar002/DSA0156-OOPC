#include <iostream>
using namespace std;
class Base 
{
	public:
    	virtual void show() 
		{
        	cout << "Base class show() method" << endl;
    	}
};

class Derived : public Base 
{
	public:
    	void show() override 
		{
        	cout << "Derived class show() method" << endl;
    	}
};

int main() 
{
    Base baseObj;
    Derived derivedObj;
    Base* basePtr;
    basePtr = &baseObj;
    basePtr->show(); 
    basePtr = &derivedObj;
    basePtr->show();
}

