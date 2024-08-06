#include<iostream>
using namespace std;
int main()
{
	int a,b,i;
	cout<<"Enter first"<<endl;
	cin>>a;
	cout<<"Enter second"<<endl;
	cin>>b;
	cout<<"The number between"<<a<<"and"<<b<<endl;
	for(i=a+1;i<b;i++)
	{
		if(i%2==0)
		{
			cout<<i;
		}
		cout<<" ";
	}
}
