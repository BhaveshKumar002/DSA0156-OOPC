#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int a[10],n,i,j,d;
	cout<<"Enter limit"<<endl;
	cin>>n;
	cout<<"Enter elements"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i]==a[j])
			{
				d = a[0]+1;
			}
		}
	}
	cout<<"Smallest missing number "<<d;
}
