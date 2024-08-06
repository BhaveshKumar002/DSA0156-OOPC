#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int a[10],n,i;
	cout<<"Enter limit"<<endl;
	cin>>n;
	cout<<"Enter elements"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	cout<<"Sorted Array";
	for(i=0;i<n;i++)
	{
		cout<<" "<<a[i];
	}
	
}
