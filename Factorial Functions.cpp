#include<iostream>
using namespace std;
double fact(int x)
{
	 int f=1,i;
	 for(i=1;i<=x;i++)
	 {
	 	f=f*i;
	 }
	 return f;
}
int main()
{
	int n;
	cout<<"Enter elements"<<endl;
	cin>>n;
	cout<<"Factorial is "<<fact(n);	
}
