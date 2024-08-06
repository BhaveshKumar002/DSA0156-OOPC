#include<iostream>
#include<algorithm>
using namespace std;
class stirngs
{
	private:
		string b,d;
	public:
	void str(string a)
	{
		sort(a.begin(),a.end());
		b = a;		
	}
	void str(string c)
	{
		sort(c.begin(),c.end());
		d = c;
	}
	void eon()
	{
		if(b==d)
		{
			cout<<"Entered string are equal"<<endl;
		}
		else
		{
			cout<<"Strings are not equal";
		}
	}
};
int main()
{
	stirngs x;
	string y,z;
	cout<<"Enter two strings"<<endl;
	cin>>y>>z;
	x.str(y);
	x.str(z);
	x.eon();
}
