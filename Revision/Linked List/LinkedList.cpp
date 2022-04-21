#include<iostream>
using namespace std;

class Node
{
    public:
        int data;
        Node *next;
};

class LinkedList
{
    int size;
    Node *first;

    public:
        LinkedList(int arr[], int n)
        {
            Node *p = new Node;
            p->data = arr[0];
            first = p;

            for(int i = 1; i < n; i++)
            {
                p = new Node;
                p->data = arr[i];
                p->next = nullptr;
            }
        }

        void display()
        {
            Node *p = first;
            while(p != nullptr)
            {
                cout << p->data << " ";
                p = p->next;
            }
        }
};

int main()
{
    

    return 0;
}