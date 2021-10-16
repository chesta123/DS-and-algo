#include<iostream>
using namespace std;
int factorial(int n)
{
    // cout<< n << endl;
    if (n==0)
    {
        return 1;
    }   
    else
    {
        return n*factorial(n-1);
    }
}


int main()
{
    int n;
    cout<<"Enter the number for which you want to calculate factorial\n"<<endl;
    cin>>n;
    factorial(n);
    cout<<"the factorial of given number is "<<factorial(n) << endl;
}