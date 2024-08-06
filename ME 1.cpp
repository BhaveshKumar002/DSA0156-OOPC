#include<iostream>
#include<cmath>
using namespace std;
class triangle
{
	double p;
	public:
		double perimeter(double x, double y,double z)
		{
			int a,s;
			a = x+y+z;
			s = a/2;
			p = sqrt(s*(s-x)*(s-y)*(s-z));
			cout<<"The perimeter of the triangle is "<<p;
		}
};
int main()
{
	triangle g;
	double s1,s2,s3;
	cout<<"Enter sides of the triangle"<<endl;
	cin>>s1>>s2>>s3;
	g.perimeter(s1,s2,s3);
}
