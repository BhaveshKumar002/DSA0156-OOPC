#include<iostream>
using namespace std;
int add(int b)
{
	int i,c=0;
	for(i=1;i<b+1;i++)
	{
		c=c+i;
	}
	return c;
}
int main()
{
	int a;
	cout<<"Enter a number\n";
	cin>>a;
	cout<<"The sum of 1 to "<<a<<" is "<<add(a);
}
