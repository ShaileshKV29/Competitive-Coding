#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
    }
};

class LinkedList
{
    Node *head;

    public:
        LinkedList(int arr[], int n)
        {
            Node *p = new Node(arr[0]);
            head = p;
            for(int i = 1; i < n; i++)
            {
                Node *t = new Node(arr[i]);
                p->next = t;
                p = t;
            }
        }
};

int main()
{
    

    return 0;
}