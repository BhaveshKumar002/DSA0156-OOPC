#include<iostream>
using namespace std;
int main()
{
	int n,i,j;
	cout<<"Enter a limit"<<endl;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=n;j>=i;j--)
		{
			cout<<" ";
		}
		for(j=1;j<=i;j++)
		{
			cout<<j<<" ";
		}
		cout<<endl;
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i+1;j++)
		{
			cout<<" ";
		}
		for(j=1;j<=n-i;j++)
		{
			cout<<j<<" ";
		}
		cout<<endl;
	}
}
