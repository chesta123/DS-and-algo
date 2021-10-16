#include <iostream>
using namespace std;
int fibo(int n)
{
    if (n <= 1)
    {
        return n;
    }
    return fibo(n - 2) + fibo(n - 1);
}

int main()
{
    cout << "Enter n" << endl;
    int n;
    cin >> n;
    if (n > 0)
    {
        fibo(n);
        cout << fibo(n) << endl;
    }
}