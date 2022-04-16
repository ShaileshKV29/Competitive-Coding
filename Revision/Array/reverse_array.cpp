#include<iostream>
using namespace std;

int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(arr)/sizeof(arr[0]);
    int temp;

    int i = 0, j = size - 1;
    while(i < j)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;   
    }

    for(int k = 0; k < size; k++)
        cout << arr[k] << " ";

    return 0;
}