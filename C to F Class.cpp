#include<iostream>
using namespace  std;
class ctof
{
	double c;
	public:
		ctof(double ce)
		{
			c = ce;
		}
		double celtof()
		{
			return (c*9.0/5.0)+32.0;
		}
};
int main()
{
	double cc;
	cout<<"Enter Celcius"<<endl;
	cin>>cc;
	ctof cov(cc);
	cout<<"Celcius to Farheniet is "<<cov.celtof();
}
