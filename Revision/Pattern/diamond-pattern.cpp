#include<iostream>
using namespace std;

int main()
{
    for(int i = 1; i <= 10; i++)
    {
        for(int j = 1; j <= 10; j++)
        {
            if(i + j > 10)
                cout << "* ";
            else
                cout << "  ";
        }

        for(int k = 2; k <= i; k++)
            cout << "* ";
        cout << endl;
    }

    for(int i = 1; i <= 10; i++)
    {
        for(int j = 0; j <= 10; j++)
        {
            if(j >= i)
                cout << "* ";
            else
                cout << "  ";
        }

        for(int k = 8 - i; k > 0; k--)
            cout << "* ";
        cout << endl;
    }

    return 0;
}