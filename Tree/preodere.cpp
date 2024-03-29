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
    Node *root = nullptr;

    public:
        Tree(int arr[], int n)
        {
            root = new Node(arr[0]);

            queue<Node *> que;
            que.push(root);

            int i = 1;
            while(i < n)
            {
                Node *p = que.front();
                que.pop();

                if(i < n){
                    Node *t = new Node(arr[i]);
                    que.push(t);
                    p->left = t;
                    i++;
                }

                if(i < n)
                {
                    Node *t = new Node(arr[i]);
                    que.push(t);
                    p->right = t;
                    i++;
                }
            }
        }

        // void preOrder()
        // {
        //     preOrderRev(root);
        // }

        // void preOrderRev(Node *p)
        // {
        //     if(p != nullptr)
        //     {
        //         cout << p->data << " ";
        //         preOrderRev(p->left);
        //         preOrderRev(p->right);
        //     }
        // }

        void preOrder()
        {
            
        }

};


int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    Tree tree(arr, 10);

    tree.preOrder();

    return 0;
}