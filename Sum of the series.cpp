#include <iostream>
using namespace std;
int main() 
{
    double sum = 0.0,a,term;
    int i,j,fact;
    cout<<"Enter a number"<<endl;
    cin>>a;
    for (i = 1; i <= a; ++i)
	{
        fact = 1;
        for (j = 2; j <= i; ++j) 
		{
            fact = fact* j;
        }
        term = static_cast<double>(fact) / i;
        sum += term;
    }
    cout << "Sum of the series: " << sum << endl;
    return 0;
}
