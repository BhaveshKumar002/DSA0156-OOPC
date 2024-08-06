#include<iostream>
using namespace std;
class degree
{
	public:
		void getdegree()
		{
			cout<<"I got degree"<<endl;
		}
		void ungra()
		{
			cout<<"I am undergraduate"<<endl;
		}
		void pogra()
		{
			cout<<"I am post graduate"<<endl;
		}	
};
int main()
{
	degree a;
	a.getdegree();
	a.pogra();
	a.ungra();
}
