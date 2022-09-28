#include<iostream>
using namespace std;
int main()
{
	int i = 1, j, rows;
    char ch;   
    cout << "Enter number of rows = ";
    cin >> rows;
    cout << "Enter Symbol for Right Triangle Pattern = ";
    cin >> ch;
    cout << "Right Triangle Pattern\n"; 
    while(i <= rows)
    {
        j = 1;
    	while(j <= i)
		{
            cout << ch << " ";
            j++;
        }
        cout << "\n";
        i++;
    }		
 	return 0;
}
