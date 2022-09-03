#include<iostream>
using namespace std;
int main()
{
	int n,rev=0,rem;
	cout<<"Enter an integer: ";
	cin>>n;
	if(n>0)
	{
		while(n!=0)
		{
			rem=n%10;
			rev=rev*10+rem;
			n/=10;
		}
		cout<<"Reversed Number= "<<rev;
	}
	else
	{
		cout<<"Enter positive integer ";
	}
	return 0;
}
