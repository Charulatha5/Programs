#include<iostream>
using namespace std;
int main() 
{
    int age;
	cout<<"Enter your age in number:";   
    cin>>age;
    if (age >= 18) 
    {
        cout << "You are eligible for voting";
    } 
    else 
    {
        cout << "You are not eligible for voting";
        cout<<"\nYou can vote after "<<18-age <<" years" <<endl;
    }
    return 0;
}
