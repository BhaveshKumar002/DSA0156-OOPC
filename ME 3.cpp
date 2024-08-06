#include <iostream>
using namespace std;
int main() 
{
    int i,j,d=1,s,n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    for(i=1;i<=n;++i)
	{
		d=1;
        for(j=2;j<=i;j++) 
		{
            d=d*j;
        }
        s=s+d;
    }
    cout<<"Sum of the series "<<s<<endl;
}
