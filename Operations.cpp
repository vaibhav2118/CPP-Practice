#include<iostream>
using namespace std;



int main()
{
    int num1;
    int num2;

    cout<<"Enter Number 1:"<<endl;
    cin>>num1;

    cout<<"Enter Number 2:"<< endl;
    cin>>num2;

    cout << "Sum of " << num1 << " and " << num2 << " is " << num1 + num2 << endl;
    cout << "Difference of " << num1 << " and " << num2 << " is " << num1 - num2 << endl;
    cout << "Product of " << num1 << " and " << num2 << " is " << num1 * num2 << endl;
    
    if (num2 != 0) {
        cout << "Division of " << num1 << " by " << num2 << " is " << (float)num1 / num2 << endl;
    } else {
        cout << "Division by zero is not allowed." << endl;
    }

    return 0;
}