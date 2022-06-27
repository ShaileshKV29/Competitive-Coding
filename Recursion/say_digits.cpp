#include<iostream>
using namespace std;

string sayDigit(int n)
{
    static string words[10] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};

    if(n == 0)
        return "";

    string result = sayDigit(n/10) + words[n%10];
    return result;
}

int main()
{
    cout << sayDigit(419);

    return 0;
}