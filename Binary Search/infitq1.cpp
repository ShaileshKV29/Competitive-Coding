#include<iostream>
using namespace std;

int main()
{
    int arr[49] = {0};
    for(int i = 0; i < 50; i++)
    {
        arr[i] = i+1;
    }

    int i = 0;
    int j = 49;
    while(i < j)
    {
        int mid = (i+j)/2;
        if(arr[mid] == 25)
        {
            cout << "Comparison" << endl;
        }
    }

    return 0;
}