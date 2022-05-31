#include<iostream>
using namespace std;

int main()
{
    int A[] = {2,4,6,7,9,15,20};
    int n = sizeof(A)/sizeof(A[0]);

    int B[] = {1,3,4,5,8,11,13,14,21};
    int m = sizeof(B)/sizeof(B[0]);

    int C[m+n] = {0};
    int i,j,k;
    i = j = k = 0;

    while(i < n && j < m)
    {
        if(A[i] < B[j])
        {
            C[k] = A[i];
            k++;i++;
        }
        else
        {
            C[k] = B[j];
            k++;j++;
        }
    }

    for(; i < n; i++)
    {
        C[k] = A[i];
        k++;
    }

    for(; j < m; j++)
    {
        C[k] = B[j];
        k++;
    }

    for(int l = 0; l < (m+n); l++)
        cout << C[l] << " ";
    // cout << m << " " << n;

    return 0;
}