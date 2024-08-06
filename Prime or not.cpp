#include<iostream>
using namespace std;
int main()
{
	int a;
	cin>>a;
	if(a%2==0||a%3==0||a%5==0||a%7==0||a%11==0)
	{
		if(a==2||a==3||a==5||a==7||a==11)
		{
			cout<<"prime";
		}
		else
		{
			cout<<"not Prime number";
		}
	}
}
