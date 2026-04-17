#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char str[100];
    int i, length=0, flag=0;

    cout<<"Enter a String:";
    cin>>str;
    length=strlen(str);

   for(i=0; i<length/2; i++)
   {
     if(str[i] != str[length-i-1])
     {
        flag = 1;
        break;
     }
   }

   if(flag == 0)
   {
    cout<<"Palindrome";
   }
   else
   {
    cout<<"Not a Palindrome";
   }

   return 0;
}   