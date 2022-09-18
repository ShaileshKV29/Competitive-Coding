#include<iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int i = 0;
    while(s[i] != '\0')
    {
        s[i] = (int)(s[i])+1;
        i++;
    }

    cout << s;

    return 0;
}