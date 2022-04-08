#include<iostream>
using namespace std;

struct Stack
{
    long int Top = -1;
    long int size;
    long int *stack;
};

void create(struct Stack *st, int size)
{
    st->size = size;
    st->Top = -1;
    st->stack = new long int[size];
}

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

void push(Stack *st, int item)
{
    if(st->Top == st->size - 1)
        cout << "Stack Overflow" << endl;
    else
    {
        st->Top++;
        st->stack[st->Top] = item;
    }
}

int pop(struct Stack *st)
{
    int x = -1;
    if(st->Top == -1)
        cout << "Stack is Empty" << endl;
    else
    {
        x = st->stack[st->Top];
        st->stack[st->Top--] = 0;
    }

    return x;
}

int parenthesis_matching(Stack *st, string exp)
{
    int valid_parenthesis = 0;
    long int i = 0;
    while(exp[i] != '\0')
    {
        if(exp[i] == '<')
        {
            push(st, exp[i]);
        }
        else if(exp[i] == '>')
        {
            if(st->Top != -1)
            {
                pop(st);
                valid_parenthesis += 2;
            }
        }
        i++;
    }
    return valid_parenthesis;
}

void display(Stack st)
{
    for(int i = st.Top; i >= 0; i--)
    {
        cout << st.stack[i] << endl;
    }
}

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        Stack st;
        string exp;
        cin >> exp;
        long int size = sizeof(exp)/sizeof(exp[0]);
        create(&st, size);
        int matched = parenthesis_matching(&st, exp);
        cout << matched << endl;
    }
    
    return 0;
}