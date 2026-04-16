#include<iostream>
using namespace std;

int GCD(int num1, int num2)
{
    if(num1==0)
    {
        return num2;
    }

    else if(num2==0)
    {
        return num1;
    }

    else if(num1>num2)
    {
        return GCD(num1-num2,num2);
    }

    else
    {
        return GCD(num1, num2-num1);

    }
}

int main()
{
    int num1, num2;

    cout<<"Enter Number 1:";
    cin>>num1;

    cout<<"Enter Number 2:";
    cin>>num2;

    cout<<"The GCD of "<<num1<<" and "<<num2<<" is:"<<GCD(num1,num2);

    return 0;
}