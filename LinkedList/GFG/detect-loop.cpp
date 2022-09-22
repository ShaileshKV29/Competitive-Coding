//{ Driver Code Starts
//Initial template code for C++

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* next;
    
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

void loopHere(Node* head, Node* tail, int position)
{
    if(position==0) return;
    
    Node* walk = head;
    for(int i=1; i<position; i++)
        walk = walk->next;
    tail->next = walk;
}


// } Driver Code Ends
//User function template for C++

/*

struct Node
{
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }

*/
class Solution
{
    public:
    //Function to check if the linked list has a loop.
    bool detectLoop(Node* head)
    {
        // your code here
        // if(head == nullptr)
        //     return 0;
        // if(head->next == nullptr)
        //     return 0;
        
        // Node *p = head;
        // Node *q = head;
        // while(p != nullptr && q != nullptr)
        // {
        //     p = p->next;
        //     q = q->next->next;
        //     if(p == q)
        //         return 1;
        // }
        // set<Node *> p;
        // while(head != nullptr)
        // {
        //     if(p.find(head) != p.end())
        //         return true;
        //     p.insert(head);
        //     head = head->next;
        // }
        // return false;
        
        map<Node *, int> m;
        Node *p = head;
        while(p != nullptr)
        {
            if(m[p] == 1)
                return true;
            m[p]++;
            p = p->next;
        }
        return false;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, num;
        cin>>n;
        
        Node *head, *tail;
        cin>> num;
        head = tail = new Node(num);
        
        for(int i=0 ; i<n-1 ; i++)
        {
            cin>> num;
            tail->next = new Node(num);
            tail = tail->next;
        }
        
        int pos;
        cin>> pos;
        loopHere(head,tail,pos);
        
        Solution ob;
        if(ob.detectLoop(head) )
            cout<< "True\n";
        else
            cout<< "False\n";
    }
	return 0;
}

// } Driver Code Ends