#include <iostream>
#include <cmath>
using namespace std;

void printPattern(int rows) 
{
    int num = 2;
    for (int i = 1; i <= rows; ++i) 
	{
        for (int j = 1; j <= i; ++j) 
		{
            cout << num;
            cout << "\t";
        }
        num = num * num;
        cout << endl;
    }
}

int main() 
{
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;
    printPattern(rows);
    return 0;
}
