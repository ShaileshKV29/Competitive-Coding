#include<iostream>
using namespace std;

struct Stack
{
    int Top = -1;
    int size;
    int *stack;
};

int isEmpty(Stack st)
{
    if(st.Top == -1)
        return 1;
    else
        return 0;
}

int isFull(Stack st)
{
    if(st.Top == st.size - 1)
        return 1;
    else
        return 0;
}

void push(Stack &st, int item)
{
    if(isFull(st))
        cout << "Stack Overflow";
    else
    {
        st.stack[st.Top] = item;
        st.Top++;
    }
}

int main()
{

    Stack st;
    
    return 0;
}