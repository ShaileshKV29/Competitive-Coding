#include<iostream>
#include <queue>
using namespace std;

class Node
{
    public: 
        int data;
        Node *left;
        Node *right;

        Node(int d)
        {
            this->data = d;
            left = nullptr;
            right = nullptr;
        }
};

class Tree
{
    Node *root;

    public:
        Tree(int arr[], int n)
        {
            Node *root = new Node(arr[0]);

            queue<Node *> que;
            que.push(root);

            while(!que.empty())
            {
                Node *p = que.front();
                que.pop();

                int lchild;
                int rchild;

                cout << "Enter Left Child: ";
                cin >> lchild;
            }
        }

}


int main()
{
    return 0;
}