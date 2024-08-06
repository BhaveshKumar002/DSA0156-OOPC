#include<iostream>
#include<cmath>
using namespace std;
class areaof
{
	double area;
	public:
		double circle(double rad)
		{
			area = M_PI*rad*rad;
			cout<<"The perimeter of the triangle is "<<area<<endl;
		}
		double rect(double len,double bre)
		{
			area = len*bre;
			cout<<"The perimeter of the triangle is "<<area<<endl;
		}
		double tri(double brea,double hei)
		{
			area = (brea*hei)/2;
			cout<<"The perimeter of the triangle is "<<area<<endl;
		}
};
int main()
{
	areaof g;
	double r,l,b,h,br;
	cout<<"Enter radius of the circle"<<endl;
	cin>>r;
	g.circle(r);
	cout<<"Enter sides of the rectangle"<<endl;
	cin>>l>>b;
	g.rect(l,b);
	cout<<"Enter sides of the triangle"<<endl;
	cin>>h>>br;
	g.tri(br,h);
}
