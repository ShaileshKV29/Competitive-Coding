//{ Driver Code Starts
//

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

Node* inputList(int size)
{
    Node *head, *tail;
    int val;
    
    cin>>val;
    head = tail = new Node(val);
    
    while(--size)
    {
        cin>>val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
}


// } Driver Code Ends
/* structure of list node:

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

*/

class Solution{
  public:
    Node* findIntersection(Node* head1, Node* head2)
    {
        // code here
        // return the head of intersection list
        map<int, int> m1;
        map<int, int> m2;
        Node *p = head1;
        Node *q = head2;
        if(p == nullptr || q == nullptr)
            return nullptr;
        
        while(p)
        {
            m1[p->data]++;
            p = p->next;
        }
        
        while(q)
        {
            m2[q->data]++;
            q = q->next;
        }
        
        Node *newlist = nullptr;
        Node *lastnode = nullptr;
        
        p = head1;
        while(p)
        {
            if(m2[p->data] == 1)
            {
                Node *t = new Node(p->data);
                if(newlist == nullptr)
                {
                    newlist = t;
                    lastnode = newlist;
                }
                else
                {
                    lastnode->next = t;
                    lastnode = lastnode->next;
                }
            }
            p = p->next;
        }
        
        return newlist;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    
	    cin>> n;
	    Node* head1 = inputList(n);
	    
	    cin>>m;
	    Node* head2 = inputList(m);
	    Solution obj;
	    Node* result = obj.findIntersection(head1, head2);
	    
	    printList(result);
	    cout<< endl;
	}
	return 0;
}

// } Driver Code Ends