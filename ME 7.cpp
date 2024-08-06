#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a[10],n,i;
    int *p;
    cout<<"Enter limit"<<endl;
    cin>>n;
    cout<<"Enter elements"<<endl;
    for(i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    p=a;
    cout<<"Sorted Array:";
    for(i=0;i<n;i++)
        cout<<" "<<*(p+i);
    cout<<endl;
}

