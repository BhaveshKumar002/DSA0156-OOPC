#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double s1,s2,s3,p,s,a;
	
	cout<<"Enter the Side 1"<<endl;
	cin>>s1;
	cout<<"Enter the Side 2"<<endl;
	cin>>s2;
	cout<<"Enter the Side 3"<<endl;
	cin>>s3;
	
	p = s1+s2+s3;
	s = p/2;
	a = sqrt(s*(s-s1)*(s-s2)*(s-s3));
	
	cout<<"The Area"<<endl;
	cout<<a;
}
