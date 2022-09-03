#include <iostream>
using namespace std;
int main()
{
    int n;
    long fact=1.0;

    cout<<"Enter positive integer: ";
    cin>>n;
    if(n<0)
        cout << "Invalid input!...PLease Enter positive interger";
    else
	{
        for(int i=1;i<=n;++i)
		{
            fact*=i;
        }
        cout<<"Factorial of "<< n <<" = "<<fact;    
    }
    return 0;
}
