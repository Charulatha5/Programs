#include<iostream>
using namespace std;
int main()
{
    int bi,hex=0,mul=1,ch=1,rem,i=0;
    char hexadec[20];
    cout<<"Enter any Binary Number: ";
    cin>>bi;
    while(bi!=0)
    {
        rem=bi%10;
        hex=hex+(rem*mul);
        if(ch%4==0)
        {
            if(hex<10)
                hexadec[i]=hex+48;
            else
                hexadec[i]=hex+55;
            mul=1;
            hex=0;
            ch=1;
            i++;
        }
        else
        {
            mul=mul*2;
            ch++;
        }
        bi=bi/10;
    }
    if(ch!=1)
        hexadec[i]=hex+48;
    if(ch==1)
        i--;
    cout<<"\nEquivalent Value in Hexadecimal: ";
    for(i=i;i>=0;i--)
        cout<<hexadec[i];
    cout<<endl;
    return 0;
}
