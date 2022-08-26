/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        if(head == nullptr)
            return head;
        
        ListNode* f, *l = nullptr, *del = nullptr;
        f = head;
        
        for(int i = 1; i < n; i++)
        {
            if(f != nullptr)
               f = f->next;
            else
                break;
        }
        l = head;
        while(f->next != nullptr)
        {
            f = f->next;
            del = l;
            l = l->next;
        }
        
        if(del == nullptr)
        {
            head = head->next;
            delete l;
        }
        else
        {
            del->next = l->next;
            delete l;
        }
        return head;
    }
};