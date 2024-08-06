#include<iostream>
#include<cmath>
using namespace std;
class area
{
	double ar;
	public:
	area(double r)
	{
		ar = M_PI*r*r;
		cout<<"The area of circle "<<ar;
	}

};
int main()
{
	double rad;
	cin>>rad;
	area ars(rad);
}
