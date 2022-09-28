#include<iostream>
using namespace std;
int main()
{
	string a,b,c;
	cout<<"enter the username:";
	cin>>a;
	cout<<"reenter the user name:";
	cin>>b;
	if(a==b)
	{
		cout<<("username is valid");
	}
	else
	{
		cout<<("username is invalid");
	}
}
