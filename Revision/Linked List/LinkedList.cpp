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
            Node *q;
            p->data = arr[0];
            p->next = nullptr;
            first = p;

            for(int i = 1; i < n; i++)
            {
                q = new Node;
                q->data = arr[i];
                q->next = nullptr;
                p->next = q;
                p = q;
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
    int arr[5] = {1,2,3,4,5};

    LinkedList llist(arr, 5);
    llist.display();

    return 0;
}