#include<iostream>
using namespace std;
int main()
{
	int a[10],i,n;
	cout<<"Enter limit"<<endl;
	cin>>n;
	cout<<"Enter elements"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"The missing element is: ";
	for(i=0;i<n;i++)
	{
		if((a[i]+1)==a[i+1])
		{
			cout<<"";
		}
		else
		{
			cout<<a[i]+1;
			break;		
		}
	}
}

