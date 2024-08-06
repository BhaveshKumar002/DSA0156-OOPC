#include<iostream>
#include<cmath>
using namespace std;
class circle
{
	private:
		double radius,length,bearth,area;
	public:
		void ip(double r)
		{
			radius = r;		
		}
		void ca()
		{
			area=M_PI*radius*radius;
			cout<<area;
		}
		void ipr(double len, double ber)
		{
			length = len;
			bearth = ber;
		}
		void da()
		{
			area=length*bearth;
			cout<<area;
		}				
};
int main()
{
	circle d;
	double rad,l,b;
	cout<<"Enter Radius"<<endl;
	cin>>rad;
	d.ip(rad);
	d.ca();
	
	cout<<"Enter Legth and berath";
	cin>>l>>b;
	d.ipr(l,b);
	d.da();
}
