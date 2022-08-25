#include<iostream>
using namespace std;

int main()
{
    int k = 4;
    int n = 2*k -1;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            for(int m = 1; m < k; m++)
            {
                if(j == 0 || j == n-1 || i == 0 || i == n-1)
                    cout << k << " ";
                else
                    cout << " " << " ";
            }
        }
        cout << endl;
    }

    return 0;
}