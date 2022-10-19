#include<iostream>
#include<queue>
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
            this->left = nullptr;
            this->right = nullptr;
        }
};

class Tree
{
    Node *root = nullptr;

    public:
    void createTree()
    {
        int root_data;
        cout << "Enter root data: ";
        cin >> root_data;

        if(root_data == -1)
            return;
        else
            root = new Node(root_data);
        
        queue<Node *> que;
        que.push(root);

        while(!que.empty())
        {
            int left;
            int right;
            Node *p = que.front();
            que.pop();
            cout << endl;
            cout << "Node is: " << p->data << endl;

            cout << "Enter Left Child: ";
            cin >> left;


            if(left != -1)
            {
                Node *t = new Node(left);
                p->left = t;
                que.push(t);
            }

            cout << "Enter Right Child: ";
            cin >> right;



            if(right != -1)
            {
                Node *t = new Node(right);
                p->right = t;
                que.push(t);
            }
        }
    }

    void levelOrder()
    {
        Node *p = root;
        queue<Node *> q;
    }
};

int main()
{
    Tree tree;
    tree.createTree();
    return 0;
}