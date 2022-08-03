#include<iostream>
using namespace std;

int main()
{
    int n;
    int o_n;
    cin >> n;
    o_n = n;
    int a = 0;
    while(n > 0)
    {
        a += n%10;
        a = a*10;
        n = n/10;
    }
    a = a/10;
    if(a == o_n)
        cout << "Pallindrome";
    else
        cout << "Not Pallindrome";
    // cout << a;

    return 0;
}