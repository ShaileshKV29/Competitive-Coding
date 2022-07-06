#include<iostream>
using namespace std;

int maxArea(int arr[], int n)
{
    int maxArea = 0;
    for(int i = 0; i < n; i++)
    {
        int maxArea_i = arr[i];
        int min = arr[i];
        cout << "All Areas Related to " << arr[i] << endl;
        cout << arr[i] << " ";
        for(int j = i + 1; j < n; j++)
        {
            if(arr[j] < min)
                min = arr[j];
            int area = min * (j - i + 1);
            cout << area << " ";
            if(area > maxArea_i)
                maxArea_i = area;
        }
        cout << endl;
        if(maxArea_i > maxArea)
            maxArea = maxArea_i;
    }
    return maxArea;
}

int main()
{
    int arr[7] = {6,2,5,4,5,1,6};
    cout << maxArea(arr, 7);   

    return 0;
}