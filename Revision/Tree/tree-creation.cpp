#include<iostream>
#include<queue>
using namespace std;

class Node
{
    public:
        Node *lchild;
        int data;
        Node *rchild;

        Node(int d)
        {
            this->data = d;
            this->lchild = nullptr;
            this->rchild = nullptr;
        }
};

class Tree
{
    Node *root;
    public:

        void create_tree()
        {
            Node *p, *t;
            int x;
            cout << "Enter the value of Root: ";
            cin >> x;
            root = new Node(x);

            queue<Node *> q;
            q.push(root);
            while(!q.empty())
            {
                int lchild, rchild;
                p = q.front();
                cout << endl << "Parent " << p->data << endl;
                q.pop();
                cout << "Enter value of Left Child: ";
                cin >> lchild;
                if(lchild != -1)
                {
                    t = new Node(lchild);
                    p->lchild = t;
                    q.push(t); 
                }

                cout << "Enter value of Right Child: ";
                cin >> rchild;
                if(rchild != -1)
                {
                    t = new Node(rchild);
                    p->rchild = t;
                    q.push(t);
                }
            }
        }
};

int main()
{
    Tree tree;
    tree.create_tree();

    return 0;
}