#include<iostream>
using namespace std;
int main()
{
	int age;
	cout<<"Enter your age"<<endl;
	cin>>age;
	if(age>=18)
		cout<<"You are eligible to vote"<<endl;
	else
		cout<<"You have to wait "<< 18-age <<" years to vote";
}
