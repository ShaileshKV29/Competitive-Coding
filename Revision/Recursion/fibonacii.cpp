#include<iostream>
using namespace std;

int fibonacci(int n)
{
    if(n > 2)
        return fibonacci(n-1) + fibonacci(n-2);
    else
        return 1;

    return 0;
}

int main()
{
    cout << fibonacci(10);

    return 0;
}