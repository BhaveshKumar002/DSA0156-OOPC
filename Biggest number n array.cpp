#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	string n;
	cout<<"Enter a limit"<<endl;
	cin>>n;
	cout<<"Enter the variables"<<endl;
	reverse(n.begin(),n.end());
	cout<<"The biggest number is "<<n<<endl;

}
