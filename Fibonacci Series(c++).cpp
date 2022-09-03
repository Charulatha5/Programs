#include <iostream>
using namespace std;
int main()
{
    int n,f1=0,f2=1,f3=0;
	cout<<"Enter the number of terms: ";
    cin>>n;
    cout<<"Fibonacci Series: ";
    for(int i=1;i<=n;++i)
	{
        if(i==1)
		{
            cout<<f1 <<", ";
            continue;
        }
        if(i==2)
		{
            cout <<f2 <<", ";
            continue;
        }
        f3=f1+f2;
        f1=f2;
        f2=f3;
        cout<<f3 <<", ";
    }
    return 0;
}
