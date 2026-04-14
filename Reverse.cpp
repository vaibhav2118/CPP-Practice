#include<iostream>
using namespace std;

int main()
{
    int num,reverse=0,rem;
    cout<<"Enter a Number:"<<endl;
    cin>>num;

    do{
       rem = num%10;
       reverse = reverse*10+rem;
       num=num/10;
    }
    
    while(num!=0);
    cout<<"Reverse Number:"<<reverse;
    return 0;

}